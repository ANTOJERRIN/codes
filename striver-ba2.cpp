#include<bits/stdc++.h>
using namespace std;


int main()
{
    // int a[3];
    // cin>>a[0]>>a[1]>>a[2];
    // cout<<a[2];
    // int b[3][3];
    // cin>>b[1][2];
    // cout<<b[1][2];
    // string s;
    // cin>>s;
    // cout<<s[3];
    string s="striver";
    int len=s.size();
    s[len-1]='z';
    cout<<s[len-1];
    cout<<len;
    return 0;

}