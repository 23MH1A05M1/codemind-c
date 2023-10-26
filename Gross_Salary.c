#include<stdio.h>
int main()
{
    int bs;
    float gs,DA,HRA;
    scanf("%d",&bs);
    if(bs<=10000)
    {
        DA=0.80*bs;
        HRA=0.20*bs;
        gs=bs+DA+HRA;
        printf("%.2f",gs);
    }
    else if(bs<=20000)
    {
        DA=0.90*bs;
        HRA=0.25*bs;
        gs=bs+DA+HRA;
        printf("%.2f",gs);
    }
    else
    {
        DA=0.95*bs;
        HRA=0.30*bs;
        gs=bs+DA+HRA;
        printf("%.2f",gs);
        }
}