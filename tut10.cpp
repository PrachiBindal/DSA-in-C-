#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n){       
    //6789=(((0*10+9)*10+8)*10+7)*10+6
    int reversed_number=0;
    int original_number=n;
    while(n!=0) {
        reversed_number=((reversed_number*10)+(n%10));
        n=n/10;
    }
    if (reversed_number==original_number) {
        return true;
    } else {
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if(palindrome(n)==0){
        cout<<"NO, it is not palindrome";
    }
    else{
        cout<<"yes, it is palindrome";
    }
    return 0;
}