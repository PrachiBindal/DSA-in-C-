#include<bits/stdc++.h>
using namespace std;
//for printing name N times 
vector<string> N ;
vector<string>& printNTimes(int n) {
	if(n<1){
		return N;
	}
	N.push_back("Coding Ninjas");
	N=printNTimes(n-1);
	return N;
}
//for printing 1-N integers using recursion
vector<int>p;
vector<int>& printNos_1(int x) {
    if (x < 1) {
        return p;
    }
    p= printNos_1(x-1);
    p.push_back(x);
    return p;
}
//for printing N to 1
// vector<int> printNos_2(int x,int i=1, vector<int> N = {}) {
//     if (i>x) {
//       return {};
//     }
//     N=printNos_2(x,i+1);
//     N.push_back(i);
//     return N;
// }
//              or
vector<int>O;
vector<int>& printNos_2(int x) {
    if (x==0) {
      return O;
    }
    O.push_back(x);
    return printNos_2(x-1);
}
//for printing sum of first n natural numbers
int sumFirstN(int n) {
    if (n==1) {
        return 1;
    }
    return n+ sumFirstN(n-1);
    // return (n*(n+1))/2;
}
//for printing factorials of numbers till factorial of number is less than n
vector<long long>q;
long long factorial(long long n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
vector<long long>& factorialNumbers(long long n,int i=1) {
    if(factorial(i)>n){
        return q;
    }
    q.push_back(factorial(i));

    factorialNumbers(n,i+1);
}
//reversing an array
vector<int> reverseArray(int n, vector<int> &nums,int j=0)
{
    //using reverse function
    // reverse(nums.begin(),nums.end());
    // return nums;
    //or using pointer in array
    // for(int p=0;p<n/2;p++){
    //     swap(nums[p],nums[n-1-p]);
    // }
    // return nums;
    // or using another array
    // vector<int>new_nums(n);
    // for(int i=0;i<n;i++){
    //     new_nums[i]=nums[n-1-i];
    // }
    // return new_nums;
    //or using recursive function
    if (j >= n / 2) {
        return nums;
    }
    swap(nums[j],nums[n-1-j]);
    return reverseArray(n,nums,j+1);
}
//to check string is a palindrome or not 
bool isPalindrome(string& str,int i=0) {
    string original_str=str;
    // for(int p=0;p<str.size()/2;p++){
    //     swap(str[p],str[str.size()-1-p]);
    // }
    // return ((original_str)==str);
    if (i >= str.size() / 2) {
        return true;
    }
    swap(str[i], str[str.size()-1-i]);
    
    if ( original_str==str){
        return isPalindrome(str, i + 1);
    }
    else {
        return false;
    }
}
// function to generate n fibbonacci number
vector<int>R;
vector<int> generateFibonacciNumbers(int n) {
    if(n==1){
        R={0};
        return R;
    }
    if(n==2){
        R={0,1};
        return R;
    }
    R=generateFibonacciNumbers(n-1);
    R.push_back(R[R.size()-1]+R[R.size()-2]);
    return R;
}

int main(){
    int x;
    cin>>x;
    vector<int>&N=printNos_1(x);
    for(auto it:N){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int>&O=printNos_2(x);
    for(auto it:O){
        cout<<it<<" ";
    }
    cout<<endl<<sumFirstN(25)<<endl;;
    vector<string>&p=printNTimes(x);
    for(auto it:p){
        cout<<it<<" ";
    }
    vector<long long>q=factorialNumbers(x);
    for(auto it:q){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    nums=reverseArray(10,nums);
    for(auto it:nums){
        cout<<it<<" ";
    }
    R=generateFibonacciNumbers(x);

}