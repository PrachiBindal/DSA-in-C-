//containers name:
// pair
// vector
// deque
// list 
// stack
// queue
// priority_queue
// set
// multiset
#include<bits/stdc++.h>
using namespace std;
//pair
/* Inserts a pair  <string,   pair<x, y> > >    into the vector A */
void add_pair(vector<pair<string,pair<int,int> > > &A, string str, int x, int y)
{
    // pair<string,pair<int,int>>s={str,{x,y}};
    // A.push_back(s);
    A.push_back({str,{x,y}});
}

/* Returns the size of the vector A */
int get_size(vector<pair<string,pair<int,int> > > &A)
{
     return A.size();
}

/* Prints space separated values of vector A */
void print_values(vector<pair<string,pair<int,int> > > &A)
{
     for(auto it:A){
         cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<" ";
     }
}
/* sort by value x and y*/
 bool sort_by_second(pair<string,pair<int,int> >p1,pair<string,pair<int,int> > p2){
        // if(p1.second.first<p2.second.first) {return true;}
        // else if(p1.second.first>p2.second.first){return false; }
        // else{
        //     if(p1.second.second<p2.second.second){return true;}
        //     else if (p1.second.second>p2.second.second){return false;}
        // }
        return p1.second<p2.second;
    }

/* Sorts the vector A based on value x and y*/
void sort_pair(vector<pair<string,pair<int,int> > > &A)
{
    sort(A.begin(),A.end(),sort_by_second);
}
int main(){
    return 0;
}