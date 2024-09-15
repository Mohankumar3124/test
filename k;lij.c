#include <stdio.h>
int prime(int n);
int main()
{
 int n, r=0;
 printf("\n enter any number ");
 scanf("%d", &n);
 r=prime(n);
 if(r==0)
 {
 printf("\n%d is prime", n);
 }
 else
 {
 printf("\n%d is not prime", n);
 }
 return 0;
}
int prime(int n)
{
 int i;
 for(i=2;i<=n/2;i++)
 {
 if(n%i!=0)
 {
 continue;
 }
 else
 {
 return 1;
 }
 
 }
 return 0;
}
