#include <stdio.h>

int main()

{

    int e, r, n, t;

    scanf("%d %d %d", &e, &r, &n);

    int i;

    for (i = 1; i <= n; i++)

    {

        if (i == 1)

            t = e;

        else

            t = t * r;

        printf("%d ", t);
    }
}