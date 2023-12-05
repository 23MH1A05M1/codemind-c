#include<stdio.h>
int main()
{
    int first=0,second=1,third,i,n;
    scanf("%d",&n);
    printf("%d %d ",first,second);
    for(i=3;i<=n;i++)
    {
        third=first+second;
        printf("%d ",third);
        first=second;
        second=third;
    }
    
}