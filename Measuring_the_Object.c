#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(b+d==a||b+c==a||c+d==a||c==a||d==a||b==a)
    printf("YES");
    else
    printf("NO");
}