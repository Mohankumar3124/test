#include <stdio.h>
int main()
{
    int age;
    char h, r, s;
    printf("\nenter age of the person ");
    scanf(" %d", &age);
    printf("\nenter health condition\nenter 'E' if excellent else 'P'\n");
    scanf(" %c", &h);
    printf("\nenter 'C' for City and 'V' for Village\n");
    scanf(" %c", &r);
    printf("\nenter 'M' for Male and 'F' for Female\n");
    scanf(" %c", &s);
    if (h == 'E' && (age >= 25 && age <= 35) && r == 'C' && s == 'M')
    {
        printf("\nPremium Rate is 4 per thousand\nMaximum amount is 2 Lakhs");
    }
    else if (h == 'E' && (age >= 25 && age <= 35) && r == 'C' &&
             s == 'F')
    {
        printf("\nPremium Rate is 3 per thousand\nMaximum amount is 1 Lakh");
    }
    else if (h == 'P' && (age >= 25 && age <= 35) && r == 'V' &&
             s == 'M')
    {
        printf("\nPremium Rate is 6 per thousand\nMaximum amount is 10,000");
    }
    else
    {
        printf("The person can't be insured");
    }
    return 0;
}