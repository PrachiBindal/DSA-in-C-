//2 sum 
#include<bits/stdc++.h>
using namespace std;
string read(int n, vector<int> book, int target)
{
    /* brute force solution */
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         if(book[i]+book[j]==target){
    //             return "YES";
    //         }
    //     }

    // }
    // return "NO";
    /* better solution */
    for(int i=0;i<n;i++){
        if(find(book.begin(),book.end(),target-book[i])!=book.end()){
            return "YES";
        }
    }
    return "NO";
}
