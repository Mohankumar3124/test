#include<stdio.h>

int main()
{
   int age;
   printf("Enter your age\n");
   scanf("%d", &age);

   printf("you have entered %d as your age\n", age);
   if (age>=18)
   {
       printf("you can vote!");
   }

   else if(age>3) 
   printf("you are between 3 to 10 and you cvan vote for babies");
   else
   printf("you cannot vote");  

    return 0;
}