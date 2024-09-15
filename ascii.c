#include <stdio.h>

int main()
{
    char c;

    printf("Enter any character ");
    scanf("%c", &c);

    printf("ASCII values of %c is %d\n", c, c);

    return 0;
}