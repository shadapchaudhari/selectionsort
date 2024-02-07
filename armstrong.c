#include<stdio.h>
int main ()
{
    int n, sum=0, t, r;
    printf("enter a number");
    scanf("%d", &n);
    t = n;
    while(t!=0)
    {
        r = t%10;
        sum = sum+r*r*r;
        t = t/10;
    }
    if(sum==n)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("number is not armstrong");
    }
    return 0;
}
