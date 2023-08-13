#include<iostream>
using namespace std;
//for input 5

//for the output:
//     *
//    ***
//   *****
//  *******
// *********
void printTriangle_1(int n) {
        for(int i=1;i<=n;i++){
            for(int j=n;j>i;j--){
                cout<<" ";
            }
            for(int k=1;k<2*i;k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
//for the output :
// *********
//  *******
//   *****
//    ***
//     *
void printTriangle_2(int n) {
	    for(int i=0;i<n;i++){
	        for(int j=0;j<i;j++){
	            cout<<" ";
	        }
	        for(int k=1;k<2*(n-i);k++){
	            cout<<"*";
	        }
	        cout<<endl;
	    }
	}    
// for the output :
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
void printDiamond_3(int n) {
        for(int i=1;i<=n;i++){
            for(int j=0;j<n-i;j++){
                cout<<" ";
            }
            for(int j=0;j<i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int j=0;j<(n-i);j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        }    
//for the output:
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *    
 void printTriangle_4(int n) {
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<(n-i);j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
//for the output:
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1   
void printTriangle_5(int n) {
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                if(((j%2==0)&&(i%2!=0))||((j%2!=0)&&(i%2==0))){
                    cout<<1<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
    }
//for the output:
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1
void printTriangle_6(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            for(int j=1;j<=4*(n-i);j++){
                cout<<" ";
            }
            for(int j=0;j<i;j++){
                cout<<(i-j)<<" ";
            }
            cout<<endl;
        }
    }
//for the output:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
void printTriangle_7(int n) {
        int k=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<k<<" ";
                k++;
            }
            cout<<endl;
        }
    }
//for the output:
// A
// AB
// ABC
// ABCD
// ABCDE
void printTriangle_8(int n) {
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout<<char('A'+j);
            }
            cout<<endl;
        }
    }
//for the output :
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
void printTriangle_9(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
            for(int j=0;j<2*i;j++){
                cout<<" ";
            }
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
           for(int j=0;j<=i;j++){
                cout<<"*";
            }
            for(int j=0;j<2*(n-i-1);j++){
                cout<<" ";
            }
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            cout<<endl; 
        }
    }    
//for the output :
// ****
// *  *
// *  *
// ****
void printSquare_10(int n) {
        for(int i=0;i<n;i++){
            if(i==0||i==n-1){
                for(int j=0;j<(n);j++){
                    cout<<"*";
                }
            }
            else{
                cout<<"*";
                for(int j=0;j<(n-2);j++){
                    cout<<" ";
                }
                cout<<"*";
            }
            cout<<"\n";
        }
    }
//for the output:


int main(){
    int n;
    cin>>n;
    printTriangle_1(n);
    printTriangle_2(n);
    printDiamond_3(n);
    printTriangle_4(n);
    printTriangle_5(n);
    printTriangle_6(n);
    printTriangle_7(n);
    printTriangle_8(n);
    printTriangle_9(n);
    printSquare_10(n);
return 0;

}