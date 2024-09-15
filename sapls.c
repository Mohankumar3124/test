#include <stdio.h>

int main()
{
    int a, b, c, sum = 0, average = 0, product = 0;

    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;

    printf("the sum of these three numbers is %d\n", sum);

    average = (a + b + c) / 3;
    printf("the average of these three numbers is %d\n", average);

    product = a * b * c;

    printf("the product of these three numbers is %d\n", product);
    if (a >= b && a >= c)
    {

        printf("the largest of these three numbers is %d\n", a);

        /* code */
    }

    else if (b >= c)

    {
        /* code */
        /* code */ printf("the largest of these three numbers is %d\n", b);
    }
    else

        /* code */ printf("the largest of these three numbers is %d\n", c); //

    if (a <= b && a <= c)
    {
        printf("the smallest of these three numbers is %d\n", a);

        /* code */
    }

    else if (b <= c)

    {
        
       printf("the smallest of these three numbers is %d\n", b);
    }
    else
        printf("smallest of three numbers is %d\n", c);


    return 0;
}
