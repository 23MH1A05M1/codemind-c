#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%3==0)
    {
        printf("Pling");
    }
     if(x%5==0)
    {
        printf("Plang");
    }
     
     if(x%7==0)
    {
        printf("Plong");
    }
    if(x%3!=0&&x%5!=0&&x%7!=0)
    {
        printf("%d",x);
    }
}