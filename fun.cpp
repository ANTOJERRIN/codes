#include <iostream>
using namespace std;
// 
int sum(int a,int b)
{
    return a+b;
}
int min(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
// //     int a=10,b=5;
// //     cout<<"hello\n";
// //     printHello();
//     cout<<printHello() <<endl;
//     return 0;
int x=5,y=4;
cout << sum(x,y) <<endl;
cout<< x<<y;
cout << "the minimum value is "<<min(12,4);
return 0;
}
