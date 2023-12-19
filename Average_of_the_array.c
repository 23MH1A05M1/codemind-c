#include<stdio.h>
int main()
{
    int n,sum=0;
    float avg;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    sum=sum+a[i];
}
    avg=(sum*1.0)/n;
printf("%.2f",avg);
}