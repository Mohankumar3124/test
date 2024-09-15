#include <stdio.h>

char ch;
//int sum(void);

int main()
{
    char fun();

   char ch;
   ch=fun();
   
   //printf("ch=%c" ,ch);


   // sum();

    return 0;

}
 char fun()//int sum()
{
  char c;
  // float a, b, sum ;
    printf("Enter a character\n");
    scanf("%c", &c );
    //    sum = a + b;
    printf("ch=%c", ch);

    return c;

}