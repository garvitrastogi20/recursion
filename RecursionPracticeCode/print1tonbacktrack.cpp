#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0)
    {
        return;
    }
    print(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(n);
}

//Dry Run Example (Let’s say n = 3)
//First call: print(3)
//Calls print(2)
//Calls print(1)
//Calls print(0) → returns (base case)
//Prints 1
//Prints 2
//Prints 3