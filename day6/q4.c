#include<stdio.h>
int main()
{
    int i,x,n,result=1;
    printf("enter base:\n");
    scanf("%d",&x);
    printf("enter power:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        result=result*x;
    }
    printf("%d raised to power %d=%d",x,n,result);
     
    return 0;
}