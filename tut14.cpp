#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	// int gcd=1;
	// for(int i=1;i<=min(a,b);i++){
	// 	if(a%i==0&&b%i==0){
	// 		gcd=i;
	// 	}
	// }
	// return gcd;
	// int gcd=1;
	// for(int i=min(a,b);i>=1;i--){
	// 	if(a%i==0&&b%i==0){
	// 		gcd=i;
	// 		break;
	// 	}
	// }
	// return gcd;
	while(a>0 && b>0){
		if(a>=b){
			a=a%b;
		}
		else if(a<b){
			b=b%a;
		}
	}
	if(a==0){
		return b;
	}
	else if(b==0){
		return a;
	}
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"The greatest common divisor of "<<a<<" and "<<b<<" is "<<gcd(a,b);
}


