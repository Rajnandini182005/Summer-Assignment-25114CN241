#include <stdio.h>
 
void fibonacci(int num)
{
    int a=0,b=1,c;

    for(int i=1;i<=num;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;

        
    }
}
int main()
{
    int n; 
    printf("enter the limit of series:");
    scanf("%d",&n);

    fibonacci(n);
    return 0;
}