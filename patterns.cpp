#include <iostream>
using namespace std;
int main()
{
    // patterns qns 
    // squarepattern
    // int n=4;
    // for(int i=1;i<=n;i++)
    // {
    //     char c='A';
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<c;
    //         c++;
    //     }
    //     cout<<endl;
    // }
    // int g;
    // cin>>g;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<n;
    //         n++;
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j>0;j--)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j>0;j++)
    //     {
    //         cout<<n;
    //         n++;
    //     }
    //     cout<<endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<" ";
    //         /* code */
    //     }
    //     for(int j=0;j<n-i;j++)
    //     {
    //         cout<<(i+1)<<" ";
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }
    // pyramid pattern
    // for (int i = 0; i < n; i++)
    // {
    //     for(int j=n-i-1;j>0;j--)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i+1;j++)
    //     {
    //         cout<<j;
    //     }
    //     for(int j=i;j>=1;j--)
    //     {
    //         cout<<j;

    //     }
    //     cout<<endl;
    //     /* code */
    // }
    
    // hollow diamond
   int n = 5;

// Upper half
for (int i = 0; i < n; i++)
{
    // Spaces
    for (int j = 0; j < n - i - 1; j++)
    {
        cout << " ";
    }

    // Stars and inside spaces
    for (int j = 0; j < 2 * i + 1; j++)
    {
        if (j == 0 || j == 2 * i)
            cout << "*";
        else
            cout << " ";
    }

    cout << endl;
}

// Lower half
for (int i = n - 2; i >= 0; i--)
{
    // Spaces
    for (int j = 0; j < n - i - 1; j++)
    {
        cout << " ";
    }

    // Stars and inside spaces
    for (int j = 0; j < 2 * i + 1; j++)
    {
        if (j == 0 || j == 2 * i)
            cout << "*";
        else
            cout << " ";
    }

    cout << endl;
}
    return 0;
}