#include <bits/stdc++.h> 
using namespace std;
// int vecto_int(vector<int>v){
//     int result=0;
//     for(auto it:v){
//         result=result*10+it;
//     }
//     return result;
// }
// vector<int>v;
// vector<int>& atoi_helper(string str, int j = 0) {
//     if(j==str.size()){
//         return v;
//     }
//     if(isdigit(str[j])){
//         v.push_back(str[j]-'0');
//     }
//     atoi_helper(str,j+1);
//     return v;
// }

// int atoi(string str) {
//     if(str[0]=='-'){
//         return (-1)*vecto_int(atoi_helper(str));
//     }
//     return vecto_int(atoi_helper(str));
    
// }
int atoi(string str,int j=0,int result=0) {
    
    if(j==str.size()){
        if(str[0]=='-'){
        result= (-1)*result;
        return result;
        } 
        else {
          return result;
        }
    }
    if(isdigit(str[j])){
        result=result*10+(str[j]-'0');
    }
    return atoi(str,j+1,result); 
}






