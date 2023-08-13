//finding largest element in array
#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int> &arr, int n) {
    int largest_element=arr[0];
    for(int i=1;i<n;i++){
        if(largest_element<arr[i]){
            largest_element=arr[i];
        }
    }
    return largest_element;
    // by using sorting
    // sort(arr.begin(),arr.end());
    // return arr[n-1];
}
int main(){
    int n=6;
    vector<int>arr={1,43,5,32,76,2};
    cout<<largestElement(arr, n);

}