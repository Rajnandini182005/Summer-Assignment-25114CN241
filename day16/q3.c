#include<stdio.h>
int main()
{
    int i,j,num,sum;
    printf("enter size:");
    scanf("%d",&num);

    int array[num];

    for(i=0;i<num;i++)
     scanf("%d",&array[i]);
    printf("enter required sum:");
    scanf("%d",&sum);

    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++){
        if(array[i]+array[j]==sum)
          printf("pair:%d %d\n",array[i],array[j]);
    }
    }
     return 0;
}