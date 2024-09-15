#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int age, i;

    for (i = 0; i < 10; i++)

    {
        /* code */ printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        // if (age > 10)//
        // {
        // break;//
        if (age > 10)

        {
            continue;
            /* code */
        }
        
        printf("harry is a good boy");
        // }
    }

    return 0;
}
