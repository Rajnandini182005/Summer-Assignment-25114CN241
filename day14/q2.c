#include <stdio.h>
int main()
{
    int i, temp ,n, count=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];

    printf("enter array elemnets:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf(" enter elements:");
    scanf("%d",&temp);

    for(i=0;i<n;i++)
    {
        if(arr[i]==temp)
        count++;
    }
    printf("frequency=%d",count);
    return 0;
}