#include <stdio.h>
int primefactors(int n)
{
 int count;
 printf("\nPrime factors of %d are: ", n);
 for(count=2; n>1; count++)
 {
 while(n%count==0)
 {
 printf(" %d ", count);
 n=n/count;
 }
 }
 printf("\n");
}
int main()
{
 int n;
 printf("\nEnter any number ");
 scanf("%d", &n);
 primefactors(n);
 return 0;
}