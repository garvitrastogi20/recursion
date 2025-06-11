//My approach to solve this
#include<iostream>
using namespace std;
int cnt=1; //less optimal due to global variable which makes function impure
void print(int n)
{
    if(cnt==n+1)
    {
        return;
    }
    cout<<cnt<<endl;
    cnt++;
    print(n);
}
int main()
{
    int n;
    cout<<"Enter till when you want to print";
    cin>>n;
    print(n);
    return 0;
}


//more optimal approach to solve it
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