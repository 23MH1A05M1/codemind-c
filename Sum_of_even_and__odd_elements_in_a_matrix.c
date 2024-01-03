#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int ar[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int s1=0,s2=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(ar[i][j]%2==0)
            {
                s1=s1+ar[i][j];
            }
            if(ar[i][j]%2!=0)
            {
                s2=s2+ar[i][j];
            }
        }
    }
    printf("%d %d",s1,s2);
}