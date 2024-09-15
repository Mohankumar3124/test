
#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter five numbers\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if (a >= b && a >= c && a >= d && a >= e)
    {
        /* code */ printf("the largest of tese five numbers is %d\n", a);
    }

    else if (b >= c && b >= d && b >= e)
    {
        printf("%d\n is largest", b);
    }

    else if (c >= d && c >= e)
    {

        /* code */ printf("%d\n is largest", c);
    }
    else if (d >= e)
    {
        /* code */ printf("%d\n is largest", d);
    }

    else
        printf("%d is the largest\n",e);



        if (a <= b && a <= c && a <= d && a <= e)
    {
        /* code */ printf("the smallest numbers is %d\n", a);
    }

    else if (b <= c && b <= d && b <= e)
    {
        printf("%d\n is smallest", b);
    }

    else if (c <= d && c <= e)
    {

        /* code */ printf("%d\n is smallest", c);
    }
    else if (d <= e)
    {
        /* code */ printf("%d\n is smallest", d);
    }

    else
        printf("%d is thesmallest\n",e);




    return 0;
}