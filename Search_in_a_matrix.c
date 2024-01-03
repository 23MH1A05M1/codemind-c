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
    int search,f;
    scanf("%d",&search);
    for(i=0;i<a;i++)
     {
        for(j=0;j<b;j++)
        {
            if(ar[i][j]==search)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}