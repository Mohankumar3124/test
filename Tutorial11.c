#include<stdio.h>

int main()
{ 
    int age ,marks;

   printf("Enter your age\n");
   scanf("%d" , &age);

   printf("Enter your marks\n");
   scanf("%d" , &marks);

   switch (age)
   {
   case 3: 
       printf("the age is 3");
       switch (marks)
    
       {
       case 45:
           printf("your marks are 45");
           break;
       
       default:
       printf("your marks are not 45");
           break;
       }
     

     case 13: 
       printf("the age is 13");
       // the break statement is not  compulsory jab break lagta hae tab wahan ke kuyd ke statement bagar aa jata  //
       // aur break kisis statement me nhi lagane se// 
      //wo staement se match karke agla statyement v print hojata swtch kle anadr humesa int ya char value store hoti //
     

     case 23: 
       printf("the age is 23");
     break;
     
       
       
   
   default:
   printf("the age is not 3, 13 ,23");
       break;
   }
    return 0;
}
