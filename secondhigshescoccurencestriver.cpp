#include <stdio.h>
#include <string.h>
int int main(int argc, char const *argv[])
{
    char s[30005],t[55];
    int q;
    scanf("%s",s);
    scanf("%d",q);
    int n=strlen(s);
    while (q--)
    {
        scanf("%s",t);
        int f[26]={0};
        int m=strlen(t);
        for (int  i = 0; i < m; i++)
        {
            f[t[i]-'a']++;

            /* code */
        }
        int l=0,m=0;
        int minl=n+1,start=-1;
        for (int r = 0; r < n; r++)
        {
            int x=s[r]-'a';
            if(f[x]>0) m--;

            f[x]--;

            while (m==0)
            {
                int l=r-l+1;
                if(l<ml)
                {
                    ml=l;
                    start=l+1;
                }
                int y=s[left]-'a';
                f[y]++;
                if(f[y]>0) m++;
                l++;
                /* code */
            }
            
            /* code */
        }
        if(start==-1) printf("NONE\n");
        else printf("%d %d\n",minlen,start);
        
        
        /* code */
    }
    
    
    /* code */
    return 0;
}
