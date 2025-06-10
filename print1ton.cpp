#include<iostream>
using namespace std;
void print(int i, int n)
{
    if(i>n)
    return;
    cout<<i<<" ";
    print(i+1,n);
}
int main()
{
    int n;
    cout<<"Enter till when you want to print: ";
    cin>>n;
    print(1,n);
    return 0;
}