//finding second largest element in array
#include <bits/stdc++.h> 
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> a) {
    //by sorting
    /*sort(a.begin(),a.end());
    return {a[n-2],a[1]}; */
    
    //better method
    /* int largest_element=a[0];
    int second_largest_element=-1;
    for(int i=1;i<n;i++){
        if(largest_element<a[i]){
            largest_element=a[i];
        }
    }
    for(int i=1;i<n;i++){
        if((second_largest_element<a[i])&&(largest_element>a[i])){
            second_largest_element=a[i];
        }
    }
    int smallest_element=second_largest_element;
    int second_smallest_element=largest_element;
    for(int i=0;i<n;i++){
        if(smallest_element>a[i]){
            smallest_element=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if((second_smallest_element>a[i])&&(smallest_element<a[i])){
            second_smallest_element=a[i];
        }
    }
    return {second_largest_element,second_smallest_element};  */
    //by traversing
    int largest_element=a[0];
    int second_largest_element=-1;
    for(int i=1;i<n;i++){
        if(largest_element<a[i]){
            second_largest_element=largest_element;
            largest_element=a[i];
        }
        if((largest_element>a[i])&&(second_largest_element<a[i])){
            second_largest_element=a[i];
        }
    }
    int smallest_element=second_largest_element;
    int second_smallest_element=largest_element;
    for(int i=0;i<n;i++){
        if(smallest_element>a[i]){
            second_smallest_element=smallest_element;
            smallest_element=a[i];
        }
        if((a[i]>smallest_element)&&(a[i]<second_smallest_element)){
            second_smallest_element=a[i];
        }
    }
    return {second_largest_element,second_smallest_element};   
}
//to check weather array is sorted or not
int isSorted(int n, vector<int> a) {
    int temp=a[0];
    for(int i=1;i<n;i++){
        if(temp<=a[i]){
            temp=a[i];
        }
        else{return 0;}
    }
    return 1;
}
//rotate array by left leaving arr[0]
vector<int> rotateArray(vector<int>& arr, int n) {
    //basic code
    /* vector<int>r;
    for(int i=1;i<n;i++){
        r.push_back(arr[i]);
    }
    r.push_back(arr[0]);
    return r; */
    //optimal solution
    for(int i=0;i<n-1;i++){
        swap(arr[i],arr[i+1]);
    }
    return arr;
}


int main(){
    int n=6;
    vector<int>a={1,43,5,32,76,2};
    for(auto it:getSecondOrderElements(n, a)){
        cout<<it<<" ";
    }
cout<<endl;    

if(isSorted(n, a)){
    cout<<"yes,the array is sorted";
}
else{
   cout<<"the array is not sorted"; 
}
cout<<endl;
for(auto it:rotateArray(a, n)){
    cout<<it<<" ";
}
}
    
