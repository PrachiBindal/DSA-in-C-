#include<bits/stdc++.h>
//this library includes all the library
using namespace std;
//str library vector :
//count,clear,empty,erase,size,insert,find,begin,end,rbegin,rend,push_back,emplace_back are all functions of vector
/*You are required to complete below methods*/

/*You are required to complete below methods*/

/*inserts an element x at 
the back of the vector A */
void add_to_vector(vector<int> &A,int x)
{
	//A.insert(A.end(),x);  or
	A.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A)
{
// 	for(auto it=A.begin();it!=A.end();it++){
// 	    for(auto at=(it+1);at!=A.end();at++){
// 	        if(*at < *it){
// 	            int temp;
// 	            temp=*at;
// 	            *at=*it;
// 	            *it=temp;
// 	        }
// 	    }
// 	} 
//                       or
    sort(A.begin(),A.end());
}

/*reverses the vector A*/
void reverse_vector(vector<int> &A)
{
// 	vector<int>copy;
// 	for(auto it=A.begin();it!=A.end();it++){
// 	    copy.insert(copy.begin(),*it);
// 	}
// 	A=copy;           
//                    or
    reverse(A.begin(),A.end());
}

/*returns the size of the vector  A */
int size_of_vector(vector<int> &A)
{
	return A.size();
}

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A)
{
// Selection Sort    
// 	for(auto it=A.begin();it!=A.end();it++){
// 	    for(auto at=it+1;at!=A.end();at++){
// 	        if(*at > *it){
// 	             int temp;
// 	            temp=*at;
// 	            *at=*it;
// 	            *it=temp;
// 	        }
// 	    }
// 	}
//                           or
    sort(A.begin(),A.end(),greater<int>());
}

/*prints space separated 
elements of vector A*/
void print_vector(vector<int> &A)
{
// 	for(auto it=A.begin();it!=A.end();it++){
// 	    cout<<*it<<" ";
// 	} 
//                     or
    for(auto it:A){
        cout<<it<<" ";
    }
}

void main(){
    vector<int>A={9,5,6,4,8};
    add_to_vector(A,655);
    sort_vector_asc(A);
    reverse_vector(A);
    cout<<size_of_vector(A)<<endl;
    sort_vector_desc(A);
    print_vector(A);
}

