#include <stdio.h>
int main()
{
 int n1, n2, i, f;
 printf("enter any two numbers ");
 scanf("%d%d", &n1, &n2);
 if(n1>n2)
 {
 n1=n1+n2;
 n2=n1-n2;
 n1=n1-n2;
 }
 printf("Prime numbers between intervals %d and %d are:", n1, n2);
 for(i=n1+1;i<n2;++i)
 {
 f=prime_number(i);
 if(f==1)
 {
 printf("\n%d\n", i);
 }
 }
 return 0;
}
int prime_number(int n)
{
 int j, f=1;
 for(j=2;j<=n/2;++j)
 {
 if(n%j==0)
 {
 f=0;
 break;
 }
 }
 return f;
}