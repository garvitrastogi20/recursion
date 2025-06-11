#include<iostream>
using namespace std;
int f(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*f(n-1);
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" :"<<f(n)<<endl;
    return 0;
}