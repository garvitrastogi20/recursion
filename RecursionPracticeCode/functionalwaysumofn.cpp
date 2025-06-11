//functional: we dont want parameter to do the work
//pseudocode
//if n is given as 3
//f(n)-> sum of first n numbers
//so f(3)->3+ f(2)

//f(n)
// if(n==0)
//{
//    retun 0;
//}
//return n+ f(n-1);
//}
//main()
//{
//   n;
//   print(f(n));
//}

#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sum(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Sum of first "<<n<<"digits is: "<<sum(n)<<endl;
    return 0;
}