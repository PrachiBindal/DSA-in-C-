//use of hashing
#include <bits/stdc++.h> 
using namespace std;
vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int>hash(n);
    for (int i = 0; i < n; i++) {
        hash[nums[i]-1]++;
    }
    return hash;
}
// vector<int> getFrequencies(vector<int>& v) {
//     vector<int>hash(*max_element(v.begin(),v.end())+1);
//     for(int i=0;i<v.size();i++){
//         hash[v[i]]++;
//     }
//     vector<int>final;
//     vector<int>hash2(hash);
//     hash2.erase(remove(hash2.begin(), hash2.end(), 0), hash2.end());
//     for (int j = 1; j < hash.size(); j++) {
//         if (hash[j] == *max_element(hash2.begin(),hash2.end())) {
//             final.push_back(j);
//             break;
//         }
//     }
//     for (int k = 1; k < hash.size(); k++) {
//         if (hash[k] == *min_element(hash2.begin(), hash2.end())) {
//             final.push_back(k);
//             break;
//         }
//     }
//     return final;
// }
//                     or 
vector<int> getFrequencies(vector<int>& v) {
    unordered_map<int,int>p;
    for(auto it:v){
        p[it]++;
    }
    int max=0;
    int min=v.size();
    int max_place;
    int min_place;
    for(auto it:p){
        if(it.second>max){
            max=it.second;
            max_place=it.first;
        }
        if(it.second<min){
            min=it.second;
            min_place=it.first;
        }
    }
    return {max_place,min_place};
    
    
}
int main(){
    int n=7,x=7;
    vector<int>nums={4,5,3,4,6,5,7};
    vector<int>hash=countFrequency(n,x,nums);
    for(auto it:hash){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int>r=getFrequencies(nums);
    for(auto it:r){
        cout<<it<<" ";
    }
}