#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
        /* code */
    }
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        cout << func(arr,num,n) << endl;
        /* code */
    }
    
    

} 
int func(int arr[], int num, int n)
{
    int c=0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==num) c++;
        /* code */
    }
    return c;
    

}