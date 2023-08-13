//sorting
#include <bits/stdc++.h> 
using namespace std;
void selectionSort(vector<int>&arr) {
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            if (arr[i] > arr[j]) {
                swap(arr[i],arr[j]);
            }
        }
    }
}
void bubbleSort(int arr[], int n) 
{
    int temp;
    for (int i =n-1; i >0; i--) {
        for (int j = 0; j< i; j++) {
            if (arr[j] > arr[j + 1]) {
                //swap(arr[j],arr[j+1]);
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    vector<int>arr={2,28,13,17,9,2,15,8};
    int n=9;
    int arr_1[n]={1,5,6,3,8,4,9,2,10};
    selectionSort(arr);
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    bubbleSort(arr_1, 9) ;
    for(auto it:arr_1){
        cout<<it<<" ";
    }
}