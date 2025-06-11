#include<iostream>
using namespace std;
void f(int i,int fact)
{
    if(i<1)
    {
        cout<<"Factorial: "<<fact;
        return;
    }
    f(i-1,fact*i);

}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    f(n,1);
}