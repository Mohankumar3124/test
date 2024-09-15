#include <stdio.h>
int calculate_s(int a, int b, int c);
int main()
{
 int a, b, c, s, area;
 printf("\n enter three sides of triangle ");
 scanf("%d%d%d", &a, &b, &c);
 s=calculate_s(a,b,c);
 area=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("\n area of triangle is %d", area);
 return 0;
}
int calculate_s(int a, int b, int c)
{
 int s;
 s=((a+b+c)/2);
 return s;
}