#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d" ,&a ,&b);
    if (b%a==0)
    {
        /* code */printf("%d is the multiple of %d\n" ,a ,b);

    }
    
else

   printf("%d is the not multiple of %d\n" ,a ,b);

    return 0;
}