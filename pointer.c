#include <stdio.h>
void print(const void *ptr,int type)
{
    if(ptr==NULL)
    {
        printf("memory allocatopn failed.\n");
        return;
    }
    if(type==0) printf("Integer value %d",*(int *)ptr);
    else if(type==1) printf("float value:%f",*(float *)ptr);
}
int main()
{
    int intarr[5];
    float floarr[5];
    int *ip=intarr;
    float *fp=floarr;
    int i,option,index;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",(ip+i));
        /* code */
    }
    for (int i = 0; i < 5; i++)
    {
        scanf("%f",(fp+i));
        /* code */
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d",*(ip+i));
        /* code */
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%f",*(fp+i));
        /* code */
    }
    printf("option.\n");
    scanf("%d",&option);
    printf("index.\n");
    scanf("%d",&index);
    if(option==0)
    {
        if(index>=0 && index<=5)
        {
            print(ip+index,0);
        }
        else
        {
            print(NULL,0);
        }
    }
    if (option==1)
    {
        if(index>=0 && index<=5)
        {
            print(fp+index,1);
        }
        else
        {
            print(NULL,1);
        }
        
    }
    return 0;
    
    
    
    
    
    
}