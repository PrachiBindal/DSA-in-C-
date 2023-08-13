//get single element
#include<vector>
using namespace std;
int getSingleElement(vector<int> &arr){
    /* brute force solution */
	// int n=arr.size();
	// int x=*max_element(arr.begin(),arr.end());
	// vector<int>hash(x+1);
	// for(int i=0;i<n;i++){
	// 	hash[arr[i]]++;
	// }
	// for(int i=0;i<=x;i++){
	// 	if(hash[i]==1){
	// 		return i;
	// 	}
	// }

    /* better solution */
	// int xor_1=0;
	// for(int i=0;i<arr.size();i++){
	// 	xor_1=xor_1^arr[i];
	// }
	// return xor_1;

	/* optimal solution */
	for(int i=0;i<arr.size();i=i+2){
		if ((arr[i] != arr[i + 1])&&(i!=arr.size()-1)) {
			return arr[i];
		}
		if (i == (arr.size()-1)) {
			return arr[i];
		}
    }
	
	
	
        
}