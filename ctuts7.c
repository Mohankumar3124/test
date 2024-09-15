/*#include<Stdio.h>

int main()
{
    /* code */
  // int a , b;
    //a =34;
//
  //  b =6;
//
//
  //  printf("a + b = %d\n", a&&b);
    //printf("a - b = %d\n", a-b);
  // pr//intf("a * b = %d\n", a*b);
    //prin//tf("a / b = %d\n", a/b);
    //
    //r//eturn 0;
//}


#include <stdio.h>
int main()
{
char c;
printf("enter any thing ");
scanf("%c", &c);
if(c>='a' && c<='z')
{
printf("\nIt is a small letter character");
}
else if(c>='A' && c<='Z')
{
printf("\nIt is a capital letter character");
}
else if(c>='0' && c<='9')
{
printf("\nIt is a digit");
}
else
{
printf("\nIt is a special character");
}
return 0;
}
