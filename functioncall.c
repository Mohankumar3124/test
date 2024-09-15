#include <stdio.h>
int fun(int *, int *); // call by refrence4

int main()
{
    int x = 5, y = 7;
    //  x=5;//

    fun(&x, &y);
    printf("inside lower loop\n");

    printf("x=%d y=%d\n", x, y);
    return 0;
}

int fun(int *x, int *y)
{

    *x = 7;
    *y = 5;
    printf("inside main loop\n");

    printf(" x=%d,y=%d\n", *x, *y);
    return 0;
}
