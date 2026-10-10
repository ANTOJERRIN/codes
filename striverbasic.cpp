#include <bits/stdc++.h>
using namespace std;
// int fact(int n)
// {
//     if(n==0) return 1;
//     return n*fact(n-1);
// }
int f(int i,int s)
{
    if(i<1)
    {
        cout<<s;
        return 0;

    }
    f(i-1,s+1);
}
int main()
{
    int n;
    cin>>n;
    int g=f(n,0);
    cout<<g<<" ";
    return 0;
}