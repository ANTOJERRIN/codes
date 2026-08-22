#include <iostream>
using namespace std;
// int b(int n){
//     int a=0,p=1;
//     while(n>0)
//     {
//         int r=n%10;
//         n=n/10;

//         a=(r*p);
//         p*=10;


//     }
//     return a;
// }
int b(int n)
{
    int a=0,p=1;
    while(n>0)
    {
        int r=n%10;
        a=r*p;

        n/=10;
        p*=2;
    }
    return a;
}

int main()
{
// cout<<b(12)<<endl;
cout << b(101)<<endl;
return 0;
}