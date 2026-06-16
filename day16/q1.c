#include <stdio.h>
int main()
{
    int i,n ,sum=0,total=0;
    printf("enter the n:");
    scanf("%d",&n);

    int array[n-1];
    printf("enter numbers:",n-1);
    for(i=0;i<n-1;i++)

    {
        scanf("%d",&array[i]);
        sum=sum+array[i];

    }
    total=n*(n+1)/2;
    printf("missing number =%d",total-sum);
     
    return 0;

    
}
