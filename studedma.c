#include <stdio.h>
#include <stdlib.h>
int **a(int n,int m)
{
    int **ma=(int**)malloc(n*sizeof(int*));
    if(ma==NULL) return NULL;
    for (int i = 0; i < n; i++)
    {
        ma[i]=(int*)malloc(n*sizeof(int));
        if(ma[i]==NULL)
        {
            for (int k = 0; k < i; k++)
            {
                free(ma[k]);
                /* code */
            }
            free(ma);
            
        }
        /* code */
    }
    return ma;
    
}
void r(int **ma,int n,int m)
{
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&ma[i][j]);
        }
        /* code */
    }
    
}
void p(int **ma,int n ,int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; i++)
        {
            printf("%d",ma[i][j]);
            /* code */
        }
        
        /* code */
    }
    
}
int ss(int **ma,int n,int m,int t)
{
    for (int  i = 0; i < m; i++)
    {
        for (int j = 0; j < n; i++)
        {
            if (t==ma[i][j])
            {
                return i*m+j;
                /* code */
            }
            
            /* code */
        }
        
        /* code */
    }
    return -1;
    
}
void f(int **ma,int n)
{
    for (int  i = 0; i < n; i++)
    {
        free(ma[i]);
        /* code */
    }
    free(ma);
    
}
int main()
{
    int n,m,t;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&t);
    if(n<=0)
    printf (inacjnc)
    retur 1
    if(m<=0)
    pri tf(sk)
    returb 1
    ma=**a(n,m);
    if(ma==NULL)
    {
        printf("memory alllocaton failed");
        return 1;
    }
    printf("memory allocation successfully");
    printf("\n enter the mearks for %d student")
    r(ma,n,m);
    p(ma,n,m);
    if(t<=0)
    printf("incdj")
    retr
}