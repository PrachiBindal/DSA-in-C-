//reverse number
#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
    //my logic code
	if(n!=0){
        while(n %10==0){ 
                n=n/10;
            }
		while(n!=0){
            cout<<n%10;
            n=n/10;		
	    }
	}
	else {cout<<0;}
	
	//6789=(((0*10+9)*10+8)*10+7)*10+6
	// int reversed_number=0;
    // while(n!=0) {
	// reversed_number=((reversed_number*10)+(n%10));
	// 	n=n/10;
    // }
	// cout<<reversed_number;
    return 0;
}
