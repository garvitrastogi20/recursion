// let the array be:
// 1 2 3 4 5
// then we place a pointer to 1-> i and another to 5->j
// then we swap them
// then we shift the pointer to i+1 and j-1 and do recursion
//pseudocode
// f(l,r){
// if(l>=r) return
// swap(a[l], a[r]);
// f(l+1, r-1);
//}
//main()
//{
// arr intialize;
// f(0,n-1);
//}

#include<bits/stdc++.h>
using namespace std;
void f(int l,int r,int arr[])
{
    if(l>=r)
    {
        return;
    }
    swap(arr[l],arr[r]);
    f(l+1,r-1,arr);
}
int main()
{
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    f(0,n-1,arr);
    cout<<"Reversed array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}