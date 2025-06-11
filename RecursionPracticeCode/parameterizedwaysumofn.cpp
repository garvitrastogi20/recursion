//f(i, sum) -> parameterized way
//{
//   if(i<1)
//   {
//     print(sum)
//     return;
//     }
//   f(i-1, sum+i)
//}
//main()
//{
//  cin>>n;
//  f(n,0);
//}

#include<iostream>
using namespace std;
void f(int i, int sum)
{
    if(i<1)
    {
        cout<<"Sum: "<<sum;
        return;
    }
    f(i-1,sum+i);
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    f(n,0);
}