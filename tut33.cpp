//move zeroes to end
#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeros(int n, vector<int> a) {
    vector<int>m;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            m.push_back(a[i]);
        }
        else{
            count++;
        }
    }
    for(int i=0;i<count;i++){
        m.push_back(0);
    }
    return m;
    
}
