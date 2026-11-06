#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[20];
    int y;

}Pub;
typedef struct 
{
    int id;
    char title[20];
    float p;
    Pub p;
    /* data */
}B;
void print(B *bk,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("books :%d",i+1);
        printf("ids")
        prutf(tuel)
        printf("pub name:%s",bk[i].pub.name)
        /* code */
    }
    
}
B* findmax(B *bk,int n)
{
    int m=0;
    for (int i = 1; i <n ; i++)
    {
        if(bk[i].price>bk[m].price)
        {
            m=i;
        }
        /* code */
    }
    return &bk[m];
    
}
B* findmin(B *bk,int n)
{
    int mi=0;
    for (int i = 1; i <n ; i++)
    {
        if(bk[i].price<bk[mi].price)
        {
            mi=i;
        }
        /* code */
    }
    return &bk[mi];
    
}
int main()
{
    int n,i;
    printf("ente")
    if (n<=0)
    {
        return 1;
        /* code */
    }
    B *bk=(B*)malloc(n*sizeof(B));
    if(bk==NULL)
    {
        printf("the mmeory alloaction is failed.\n");
        return 1;

    }
    for (int i = 0; i < n; i++)
    {
        pritnf("enter the details of the book %d:\n",i+1)
        scanf(books[io[.id]])
        /* code */
    }
    print(bk,n);
    B *m=findmax(bk,n);
    printf()


    free(bk);
    return 0;
    
    

}



