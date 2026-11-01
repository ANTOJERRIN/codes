#include <stdio.h>
int *m(int n)
{
    return (int*)malloc(n*sizeof(int));
}
int *c(int n)
{
    return (int*)calloc(n,sizeof(int));
}
int *r(int *arr,int n1)
{
    return (int*)realloc(arr,n1*sizeof(int));
}
void read(int arr[],int start,int end)
{
    for (int i = start; i < end i++)
    {
        scanf("%d",(arr+i));
        /* code */
    }
    
}
void print(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d",*(arr+i));
        /* code */
    }
    
}
void free1(int *arr)
{
    free(arr);
}
int main() {
    int n,m;
    printf("array sixe.\n");
    scanf("%d",&n);
    if (n<=0)
    {
        printf("invs.\n");
        return 1;
        /* code */
    }
    ma=m(n);
    if(ma==NULL)
    {
        printf("memory all");
        return 1;
    }
    printf("m");
    read(ma,n);
    print(ma,n);
    printf("new size");
    scanf("%d",&m);
    if(m<=0)
    {
        printf
        free(m);
        free(c);
        return 1;
    }
    re=r(ma,n);
    if (re==NULL)
    {
        printf(mm)
        free(na)
        free(ca)
return 2;        /* code */
    }
    printf("finak resized arr")
    print(ma,n);
    
    
    
    return 0;
}
