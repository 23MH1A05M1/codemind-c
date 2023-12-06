#include<stdio.h>
int main()
{
    int first=0,second=1,third,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        third=first+second;
        if(third==n)
        {
            printf("True");
            break;
        }
        if(third>n)
        {
            printf("False");
            break;
        }
        first=second;
        second=third;
    }
}