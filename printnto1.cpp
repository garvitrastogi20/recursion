#include<iostream>
using namespace std;

void print(int i, int n)
{
    if(n<1)
    return ;
    cout<<n<<" ";
    print(i, n-1);
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(1,n);
    return 0;
}