//removing duplicate element is array
#include <bits/stdc++.h> 
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
	//basic solution 
	/*set<int>a;
	for(int i=1;i<n;i++){
		a.insert(arr[i]);
	}
	return a.size();  */
	//optimal solution
	int temp1=arr[0];
	int count=1;
	for(int i=1;i<n;i++){
		if(temp1!=arr[i]){
			count++;
			temp1=arr[i];
		}
	}
	return count;
}
int main(){
    int n=14;
    vector<int>a={1,43,5,32,76,2,678,3,2,1,3,4,5,6};
    cout<<removeDuplicates(a, n);
}