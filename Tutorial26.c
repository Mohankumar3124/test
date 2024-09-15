#include <stdio.h>

int main()
{
    printf("lets learn pointers\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;

    printf("the address of pointer to a is %p\n", &ptra);
    printf("the address of a is %p\n", ptra);

    printf("the address of a is %p\n", &a);
    printf("the address of some garbageis %p\n", ptr2);

    printf("the value of a is %x\n ", *ptra);
    printf("the value of a is %p\n", a);
    return 0;
}
