#include<stdio.h>

int main()
{
   
   int n,i ;
   printf("Enter the value of n\n");
   scanf("%d",&n);
for ( i = 2; i <=n-1; i++)
{
    /* code */if (n%i==0)
    {
        /* code */break;

    }
    
}
if (n==i)
{
    /* code */printf("the number is prime");
}

   else
   printf("the number is not prime");
   
   
    return 0;
}
