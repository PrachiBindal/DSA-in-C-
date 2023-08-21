#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	/* better solution*/
	// int n=mat.size();
	// int m=mat[0].size();
	// vector<vector<int>>copy(n,vector<int>(m));
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		copy[j][n-1-i]=mat[i][j];
	// 	}
	// }
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		mat[i][j]=copy[i][j];
	// 	}
	// }
	/* optimal solution */
	int n=mat.size();
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(i!=j){
				swap(mat[i][j],mat[j][i]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n/2;j++){
			swap(mat[i][j],mat[i][n-1-j]);
		}
	}
	
}
