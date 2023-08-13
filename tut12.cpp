//for printing all divisors
#include<bits/stdc++.h>
using namespace std;
vector<int> printDivisors(int n) {
    vector<int>v;
    // for (int i = 1; i <= n; i++) {
    //     if(n%i==0){
    //         v.insert(v.end(),i);
    //     }
    // }
    for(int i=1;i*i<=n;i++){
        if (n % i == 0 && n/i!=i) {
            v.push_back(i);
            v.push_back(n/i);
        }
        else if(n % i == 0 && n/i==i){
            v.push_back(i);
        }
    }
    sort(v.begin(),v.end());
    return v;
}
int main(){
    int n;
    cin>>n;
    //vector<int> Divisors=printDivisors(n);
    cout<<"All divisors of "<< n <<" are ";
    for(auto it:printDivisors(n)){
        cout<<it<<" ";
    }
    return 0;
}