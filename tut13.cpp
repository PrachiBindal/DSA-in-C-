//to check it is prime or not
#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int count=0;
	//by n loops
    // for (int i = 1; i <= n; i++) {
    //     if(n%i==0){
    //         count++;
    //     }
    // }
	// if (count==2){
	//  	cout<<"true";
	// }
	// else{
	//  	cout<<"false";
	// }
	// by sqrt(n) loops
    for(int i=1;i*i<=n;i++){
        if (n % i == 0 ) {
			count++;
        }   
    }
	if (count==1){
	 	cout<<"true";
	}
	else{
	 	cout<<"false";
	}
	return 0;
}