//stack
#include<bits/stdc++.h>
using namespace std;
/*the function pushes an element x into the stack s */

void push(stack<int> &s,int x)
{
    s.push(x);
}

/*pops the top element of the stack and returns it */

int pop(stack<int> &s)
{
    if(s.empty()){
        return -1;
    }
    else{
        int top_element=s.top();
        s.pop();
        return top_element;
    }
}
    
/*returns the size of the stack */
int getSize(stack<int> &s)
{
   return s.size();
}

/*returns the top element of the stack */

int getTop(stack<int> &s)
{
    if(!s.empty()){
        return s.top();
    }
    else{return -1;}   
}
//to delete the middle element using recursive functions
    void deleteMid(stack<int> &s, int sizeOfStack,int count=0)//give count =0
    {
        if (count == sizeOfStack / 2)
        {
            s.pop();
            return;
        }
        int x = s.top();
        s.pop();
        count++;
        deleteMid(s, sizeOfStack,count);
        s.push(x);
    }
    //printing stack function
    void printStack(stack<int>&s){
        if(s.empty()){
            return;
        }
        int x=s.top();
        cout<<x<<" ";
        s.pop();
        printStack(s);
        s.push(x);
    }
int main(){
    stack<int>s;
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    push(s,6);
    push(s,7);
    push(s,8);
    cout<<getSize(s)<<endl;
    cout<<getTop(s)<<endl;
    cout<<pop(s)<<endl;
    deleteMid(s,7);
    printStack(s);
    return 0;
}