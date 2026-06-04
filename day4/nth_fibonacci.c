#include<stdio.h>
int main()
{
    int i,n,limit,a=0,b=1,c;
    printf("enter the limit:\n");
    scanf("%d",&limit);
    printf("find the Nth term");
    scanf("%d",&n);
    for(i=1;i<=limit;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
    printf("Nth fibonacci term =%d",n);
    return 0;
}