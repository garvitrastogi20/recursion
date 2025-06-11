#include<bits/stdc++.h>
using namespace std;
bool f(string &s, int i)
{
    int n=s.size();
    if(i>=s.size()/2)
    {
        return true;
    }
    if(s[i]!=s[n-i-1])
    {
        return false;
    }
    return f(s, i+1);
}

int main()
{
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<"Is it palindrome: "<<f(s, 0);
    return 0;
}
//time complexity: O(n/2);