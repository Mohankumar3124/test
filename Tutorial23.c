#include <stdio.h>

int main()
{
    // printf("Hello World\n");
    int marks[2][4] = {{45, 54, 53, 32},
                       {54, 65, 76, 87}};

    // for (int i = 0; i < 4; i++)
    //{
    ////  /* code */ printf(" enter the value of %d element of the array ", i);
    // scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            /* code */

            /* code */ // printf(" the value of %d ,%d element of the array is %d\n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
       printf("\n");
    }

    // marks[0] = 4;
    // marks[1] = 34;
    // marks[2] = 34;
    // marks[3] = 34;
    // printf("marks of student 1 is %d\n", marks[0]);

    // marks[0] = 567;
    // printf("marks of student 1 is %d\n", marks[0]);
    return 0;
}
