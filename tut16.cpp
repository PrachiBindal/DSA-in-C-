#include<bits/stdc++.h>
using namespace std;

/*inserts an element x at 
the back of the queue q */
void push(queue<int> &q,int x)
{
    q.push(x);
}


/*pop out the front element 
from the queue q and returns it */
int pop(queue<int> &q)
{
   if(q.empty()){
       return -1;
   }
   else{
       int front_element=q.front();
       q.pop();
       return front_element;
   }
}

/*returns the size of the queue q */
int getSize(queue<int> &q)
{
    return q.size();
}

/*returns the last element of the queue */
int getBack(queue<int> &q)
{
	if(q.empty()){
        return -1;
    }
    else{
        return q.back();
    }
}

/*returns the first element of the queue */
int getFront(queue<int> &q)
{
    if(q.empty()){
        return -1;
    }
    else{
        return q.front();
    }
}
int main(){
    queue<int>q;
    push(q,5);
    push(q,6);
    push(q,6);
    cout<<getSize(q)<<endl;;
    cout<<getBack(q)<<endl;;
    cout<<getFront(q)<<endl;;
    cout<<pop(q);
    return 0;
}