#include <stdio.h>

int main()
{
    int a, b ,quotient, remainder;
    //float remainder;


    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    quotient = a/b ;
    remainder =a%b;

    printf("%d\n%d\n" ,quotient,remainder);

    printf("Hello World\n");
    return 0;
}
