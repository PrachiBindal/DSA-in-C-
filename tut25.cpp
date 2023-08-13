#include<bits/stdc++.h>
using namespace std;


//1,4,6,3,8,2,9
//1,4,3,6,2,8,9
//1,3,4,2,6,8,9
//1,3,2,4,6,8,9
//1,2,3,4,6,8,9
#include<bits/stdc++.h>
int j=0;
void bubblesort_helper_2(int* arr,int i,int n){
    if(j==n-i-1){
        return;
    }
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
    bubblesort_helper_2(arr,i,n);
}
void bubblesort_helper_1(int* arr,int i,int n){
    if(i==n){
        return;
    }
    // for(int j=0;j<n-i-1;j++){
    //     if(arr[j]>arr[j+1]){
    //         swap(arr[j],arr[j+1]);
    //     }
    // }
    bubblesort_helper_2(arr, i,n);
    bubblesort_helper_1(arr,i+1,n);
    return;
}
void bubbleSort(int &arr, int n) 
{
    bubblesort_helper_1(&arr,0,n);
}