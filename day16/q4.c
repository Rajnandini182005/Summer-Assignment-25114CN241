#include <stdio.h>
int main()
{
    int i, j, k,n;
    printf("enter size:");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++) 
     scanf("%d",&arr[i]);
    
     for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;){
         if(arr[i]==arr[j]){
            for(k=j;k<n-1;k++)
            arr[k]=arr[k+1];
            n--;
         }
         else{
            j++;
         }
        }
     }
     printf("array after removing duplicates:\n");
     for(i=0;i<n;i++){
       printf("%d",arr[i]);}

    return 0;
}
