#include <iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int sum(int n)
{
    int s=0;
    for (int j = 0; j< n; j++)
    {
        s+=j;
        /* code */
    }
    return s;
    
}
int main()
{
cout<< fact(4) <<endl;
cout << sum(5) <<endl;
return 0;
}