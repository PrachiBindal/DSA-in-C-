//rotate it to left by k times
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    int k;
    cin>>k;
    // for(int i=0;i<k%n;i++){
    //     for(int j=0;j<n-1;j++){
    //         swap(arr[j],arr[j+1]);
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    vector<int>r;
    for(int i=k;i<n;i++){
        r.push_back(arr[i]);
    }
    for(int i=0;i<k;i++){
        r.push_back(arr[i]);
    }
    for(auto it:r){
        cout<<it<<" ";
    }
    return 0;
}
