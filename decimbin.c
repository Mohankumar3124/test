#include <stdio.h>

int main()
{
    int remainder;
    int num;
    int a[10];
    int i=0;

    printf("Enter the value of num\n");
    scanf("%d", &num);

    while (num)
    { 

        /* code */ remainder = num % 2;
        num = num/2;
        a[i] = remainder;
        i++;

    }

    for ( int j =i-1; j >=0; j--)
    {
        /* code */printf("%d" ,a[j]);

    }
    

    return 0;
}
