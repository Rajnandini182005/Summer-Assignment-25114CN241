 #include <stdio.h>
  
 int prime(int n)
 {
    int i;

    if(n<=1)
     return 0;
  for(i=2;i<=n/2;i++)
  {
    if(n%i==2)
      return 0;
  }
  return 1;
 }

  int main()
  {
    int n;
    printf("enter numbers:");
    scanf("%d",&n);

     if(prime(n))
     {
        printf("%d is the prime number.",n);
     }
     else
     
     {
        printf("%d is not prime number .",n);
     }
  }
