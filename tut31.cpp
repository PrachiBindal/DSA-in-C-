//longest subarray with positive and negative numbers
#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
   /* brute solution */
    // int maxi=0;
    // int n=a.size();
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum=sum+a[j];
    //             if(sum==k){
    //                 maxi=max(maxi,j-i+1);
    //             }
    //         }
    // }
    // return maxi;
   
    /* better solution */ //optimal for negative numbers
    // map<long long,int>presum;
    // int maxi=0;
    // int n=a.size();
    // long long sum=0;
    // for (int i = 0; i < n; i++) {
    //     sum+=a[i];
    //     if(sum==k){
    //         maxi=i+1;
    //     }
    //     if(presum.find(sum-k)!=presum.end()){
    //         maxi=max(maxi,i-presum[sum-k]);
    //     }
    //     presum[sum]=i;        
    // }
    // return maxi;

    /* optimal solution */ // for positive numbers only
    long long sum=a[0];
    int maxi=0;
    int left=0;
    int right=0;
    int n=a.size();
    // 1,2,3,1,1,1
    while (right < n) {
        while((left<=right)&&(sum>k)){
            sum=sum-a[left];
            left++;
        }
        if(sum==k){
            maxi=max(maxi,right-left+1);
        }
            right++;
        if (right < n) {
            sum=sum+a[right]; 
        }
    }
    return maxi;
    
}
int main(){
    
}