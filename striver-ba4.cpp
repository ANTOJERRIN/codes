#include <bits/stdc++.h>
using namespace std;
void dos(int num)
{
    cout<<num<<endl;
    num=num*10;
    cout<<num<<endl;
}
void fs(int a[],int n)
{
    a[0]+=100;
    cout << "value inside the fucntion uis "<<a[0]<<endl;
}
int main()
{
    int num=10;
    dos(num);
    cout<<num<<endl;
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        /* code */
    }
    fs(a,n);
    cout<<"value ionside the int main:"<<a[0]<<endl;
    
    
    return 0;
}
