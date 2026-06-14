#include <stdio.h>
int main()
{
    int  n,i,temp,found=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    

    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);


    }
    printf("enter elments to search:");
    scanf("%d",&temp);

    for(i=0;i<n;i++)
    {
        if(arr[i]==temp)
        {
           found=1;
           break;

        }
    }
    if(found)
        printf("elements found at position %d",i+1);

    
    else 
    
        printf("elements not found");
    
    return 0;
}