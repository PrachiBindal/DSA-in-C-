#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	char a;
    cin >> a ; 
	if (a == 'A' || 'B' || 'C' || 'D' || 'E' || 'F' ||
         'G' || 'H' || 'I' || 'J' || 'K' || 'L' || 'M' ||
         'N' || 'O' || 'P' || 'Q' || 'R' || 'S' || 'T' ||
         'U' || 'V' || 'W' || 'X' || 'Y' || 'Z') {

		cout<<1<<endl;	
	}
	else if(a == 'a' || 'b' || 'c' || 'd' || 'e' || 'f' ||
         'g' || 'h' || 'i' || 'j' || 'k' || 'l' || 'm' ||
         'n' || 'o' || 'p' || 'q' || 'r' || 's' || 't' ||
         'u' || 'v' || 'w' || 'x' || 'y' || 'z'){
		cout<<0<<endl;
	}
    else {
        cout<<-1<<endl;         
	}
	return 0;
}
