//merge sorting
#include <bits/stdc++.h> 
using namespace std;
void merge(vector<int>&arr, int l, int mid, int r) {
    int left=l;
    int right=mid+1;
    vector<int>temp;
    int i=0;
    while (left <= mid && right <= r) {
        if (arr[left]<=arr[right]) {
            temp.push_back(arr[left]);
            left++;
            i++;
        } 
        else {
            temp.push_back(arr[right]);
            right++;
            i++;
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
        i++;
    }
    while (right <= r) {
        temp.push_back(arr[right]);
        right++;
        i++;
    }
    for(int i=0;i<=(r-l);i++){
        arr[l+i]=temp[i];
    }
}
void mergeSort(vector<int>& arr, int l, int r) {
    if (l == r) {
        return;
    }
    int mid=(r+l)/2;
    mergeSort(arr,l, mid);
    mergeSort( arr, mid+1,r);
    merge(arr,l,mid,r);
    return;
}
int main(){
    vector<int>arr={2,28,13,17,9,2,15,8};
    int n=9;
    mergeSort(arr, 0, 8);
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}

