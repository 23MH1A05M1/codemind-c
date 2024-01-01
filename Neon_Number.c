#include<stdio.h>
int main()
{
    int n,s,sum=0,r,os;
    scanf("%d",&n);
    s=n*n;
    os=s;
    while(s!=0)
    {
        r=s%10;
        sum=sum+r;
        s=s/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}