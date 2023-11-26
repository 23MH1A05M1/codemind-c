#include<stdio.h>
int main()
{
    int n,m,min,GCD=1,i;
    scanf("%d%d",&n,&m);
    if(n<m)
    min=n;
    else
    min=m;
    for(i=2;i<=min;i++)
    {
        if(n%i==0&&m%i==0)
        GCD=i;
    }
    printf("%d",GCD);
}