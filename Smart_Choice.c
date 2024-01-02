#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=(500-a*2)+(1000-((a+b)*4));
    int d=(1000-b*4)+(500-((a+b)*2));
    (c>d)?printf("%d",c):printf("%d",d);
}