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
    for(i=0;i<b;i++)
    {
        int sum=0;
        for(j=0;j<a;j++)
        {
            sum=sum+ar[j][i];
        }
        printf("%d ",sum);
    }
}