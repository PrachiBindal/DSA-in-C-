//for counting number of digits
#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
	//by vector method
	// vector<int>v={};
	// while(n!=0){
	// 	v.push_back(n%10);
	// 	n=n/10;	
	// }
	// return v.size();
	int count=0;
    while (n != 0) {
		n=n/10;
		count++;
    }
	return count;	
}
int main(){
    cout<<countDigits(4567);
    return 0;
}