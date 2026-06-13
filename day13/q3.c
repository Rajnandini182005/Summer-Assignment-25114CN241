#include<stdio.h>
int main()
{
    int arr[100],n,i,largest ,smallest;
    printf("enter number of elements:");
    scanf("%d",&n);
      
    printf("enter the elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    smallest=arr[0];
    largest=arr[0];
     
    for(i=1;i<n;i++){
        if(arr[i]>largest)
        largest=arr[i];

        if(arr[i]<smallest)
        smallest=arr[i];

    }
    printf("largest elements=%d\n",largest);
    printf("smallest elements=%d\n",smallest);

        return 0;
}