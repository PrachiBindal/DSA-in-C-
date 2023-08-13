#include<bits/stdc++.h>
using namespace std;
// counting no. of subarrays which are less than k
int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long product;
        vector<int> count(n, 0);
        int sum=0;
        for (int i=0;i<n;i++){
            product=a[i];
            if(product<k){
                count[i]=1;
                for(int j=i+1;j<n;j++){
                product=product*a[j];
                if(product<k){
                    count[i]++;
                }
                else{
                    break;
                }
                }
            }
            else{
                count[i]=0;
            }
        }
        for(int l=0;l<n;l++){
            sum=sum+count[l];    
        }
        return sum;
    }
int main (){
    int n = 7 , k = 100;
    vector <int> a = {1, 9, 2, 8, 6, 4, 3};
    cout<< countSubArrayProductLessThanK(a, n, k);
    return 0;
}