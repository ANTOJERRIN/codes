#include <iostream>
using namespace std;
int main()
{
    int i=2;
    int n,flag=1;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n<2)
    {
        cout<<"the number is not a prime number";
        return 0;
    }
    else if(n>=2)
    {
        for(i=2;i<=n-1;i++)
        {
        if(n%i==0)
        {
            cout<<"the number is not a prime number"<<endl;
            flag=0;
            break;
        }


        }
        
    }
    if(flag==1)
    {
        cout<<n<<"the number is prime "<<endl;
    }
    return 0;

}