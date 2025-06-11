//Recursion- when a function all itself until a specific condition is met

#include<iostream>
using namespace std;
int cnt=0;
void f()
{
    cout<<"1"<<" ";
    f(); // when this function stops , then the error is stack overflow
    //segmentation error
    // the condition where the recursion is stopped, the condition is known as base condition
}

void f1()
{
    if(cnt==4)
    return;
    cout<<cnt<<" ";
    cnt++;
    f1();    
}

//Recursion tree: A recursion tree is a way to visualize how a recursive function breaks down a problem into smaller subproblems like branches of a tree.
int main()
{
    //f();
    f1();
    return 0;
}