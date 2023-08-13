#include <bits/stdc++.h> 
using namespace std;
int vecto_int(vector<int>v){
    int result=0;
    for(auto it:v){
        result=result*10+it;
    }
    return result;
}
int atoi(string str) {
vector<int>v;
    for(int i=0;i<str.size();i++){
       if(isdigit(str[i])){
        v.push_back(str[i]-'0');
    }
    } 
    int result=vecto_int(v);
    if(str[0]=='-'){
        result=(-1)*result;
    }   
    return result;
}