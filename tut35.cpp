// set matrix 0
#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    /* better solution */
    // vector<int>store_i;
    // vector<int>store_j;
	// for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(matrix[i][j]==0){
    //             store_i.push_back(i);
    //             store_j.push_back(j);
    //         }
    //     }
    // }
    // for(int i=0;i<store_i.size();i++){
    //     for(int j=0;j<m;j++){
    //         matrix[store_i[i]][j]=0;
    //     }  
    // }
    // for(int j=0;j<store_j.size();j++){
    //     for(int i=0;i<n;i++){
    //         matrix[i][store_j[j]]=0;
    //     }
    // }
    
    /* another way of doing better solution*/
    // int arr_i[n]={0};
    // int arr_j[m] ={0};
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(matrix[i][j]==0){
    //             arr_i[i]=1;
    //             arr_j[j]=1;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr_i[i]==1||arr_j[j]==1){
    //             matrix[i][j]=0;
    //         }
    //     }
    // }
    // return matrix;



    /* optimal solution */
    int c=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0){
                    matrix[0][j]=0;
                }
                else{
                    c=0;
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]!=0){
                if((matrix[i][0]==0)||(matrix[0][j]==0)){
                    matrix[i][j]=0;
                }
            }
        }
    }
    for(int j=0;j<m;j++){
        if(matrix[0][0]==0){
            matrix[0][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        if(c==0){
            matrix[i][0]=0;
        }
    }
    return matrix;
}