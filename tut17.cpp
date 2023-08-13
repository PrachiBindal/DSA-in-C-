//set
#include<bits/stdc++.h>
using namespace std;
/*inserts an element x to the set s */
void insert(set<int> &s,int x)
{
    s.insert(x);
}

/*prints the contents of the set s */
void print_contents(set<int> &s)
{
    for(auto it:s){
        cout<<it<<" ";
    }
}

/*erases an element x from the set s */
void erase(set<int> &s,int x)
{
    s.erase(x);
}

/*returns 1 if the element x is
present in set s else returns -1 */
int find(set<int> &s,int x)
{
    auto pos=s.find(x);
    if(pos!=s.end()){
        return 1;
    }
    else{
        return -1;
    }
}

/*returns the size of the set s */
int size(set<int> &s)
{
   return 
   s.size();
}
int main(){
    set<int>s={};
    insert(s,5);
    insert(s,6);
    insert(s,7);
    cout<<size(s)<<endl;;
    erase(s,4);
    cout<<find(s,4)<<endl;;
    print_contents(s);
    return 0;
}