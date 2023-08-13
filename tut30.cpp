#include<bits/stdc++.h>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    vector<int>u;
    int i=0;
    int j=0;
    while ((i<a.size())&&(j<b.size())) {
        if (a[i] == b[j]) {
            if ((u.empty())||(u.back()!=a[i])) {
                u.push_back(a[i]);
                i++;
                j++;
            }
            else {
                i++;
                j++;
            }
        }
        else if (a[i]<b[j]){
            if ((u.empty())||(u.back()!=a[i])) {
                u.push_back(a[i]);
                i++;
            }
            else {
                i++;
            }  
        }
        else{
            if ((u.empty())||(u.back()!=b[j])) {
                u.push_back(b[j]);
                j++;
            }
            else {
                j++;
            } 
        }
    }
    while(i<a.size()){
        if  ((u.empty())||(u.back()!=a[i])) {
                u.push_back(a[i]);
                i++;
            }
            else {
                i++;
            }
    }
    while(j<b.size()){
        if  ((u.empty())||(u.back()!=b[j])) {
                u.push_back(b[j]);
                j++;
        }
        else {
            j++;
        } 
    }  
    return u;
    // brute code
    // std::set<int>u;
    // vector<int>ud;
    // for(int i=0;i<a.size();i++){
    //     u.insert(a[i]);
    // }
    // for(int i=0;i<b.size();i++){
    //     u.insert(b[i]);
    // }
    // for(auto it:u){
    //     ud.push_back(it);
    // }
    // return ud;
}
int main(){
    int n=14;
    vector<int>a={1,4,5,7};
    vector<int>b={1,2,2,4,5,6,7,10};
    for(auto it:sortedArray(a,b)){
        cout<<it<<" ";
    }
}