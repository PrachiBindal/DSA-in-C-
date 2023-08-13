//input and output
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    int sum;
    //<< is insertion operator
    cout << "enter the value of num1 and num2: \n";
    // >> is extraction operator
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "the sum of number1 and number 2 is "<<sum;

    return 0;
}
