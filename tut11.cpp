#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
	int count=0;
    while (n != 0) {
		n=n/10;
		count++;
    }
	return count;	
}
bool checkArmstrong(int n){
	int sum=0;
	int number=n;
    while (n!=0) {
		sum=sum+pow(n%10,countDigits(number));
		n=n/10;
	}
    return sum==number;    
}
int main(){
    int n;
    cin>>n;
    if(checkArmstrong(n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}