#include <iostream>
using namespace std;
int main()
{
    int n=45;
    if(n>=0)
    {
        cout<<"n is postitive"<<endl;
    }
    if(n==45)
    {
        cout<<"equal"<<endl;
    }
    else{
        cout<<"fahhh"<<endl;
    }
    int q=45;
    cout<<(q>23?"greater":"smaller")<<endl;
    return 0;
}