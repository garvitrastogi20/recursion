#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print(string name)
{
    if(cnt==5)
    return;
    cout<<name<<" ";
    cnt++;
    print(name);
}
int main()
{
    string name;
    cin>>name;
    print(name);
    return 0;
}