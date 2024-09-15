#include <stdio.h>

int main()
{
    int x, y;
    
    printf("Enter two numbers\n");
    scanf("%d%d", &x, &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("%d\n%d\n", x, y);
    printf("Hello World\n");
    return 0;
}
