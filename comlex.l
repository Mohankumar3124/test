#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a keyword
int isKeyword(char *str)
{
    char keywords[5][10] = {"int", "float", "if", "else", "while"};
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(keywords[i], str) == 0)
        {
            return 1;
        }
    }
    return 0;
}

// Function to check if a character is an operator
int isOperator(char ch)
{
    char operators[] = {'+', '-', '*', '/', '=', '<', '>', '&', '|', '!'};
    for (int i = 0; i < 11; i++)
    {
        if (operators[i] == ch)
        {
            return 1;
        }
    }
    return 0;
}

// Function to check if a character is a punctuation
int isPunctuation(char ch)
{
    char punctuations[] = {',', ';', '(', ')', '{', '}'};
    for (int i = 0; i < 6; i++)
    {
        if (punctuations[i] == ch)
        {
            return 1;
        }
    }
    return 0;
}

// Function to check if a string is an identifier
int isIdentifier(char *str)
{
    if (!isalpha(str[0]) && str[0] != '_')
    {
        return 0;
    }
    for (int i = 1; i < strlen(str); i++)
    {
        if (!isalnum(str[i]) && str[i] != '_')
        {
            return 0;
        }
    }
    return 1;
}

// Function to check if a string is a number
int isNumber(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (!isdigit(str[i]) && str[i] != '.')
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char input[100];
    printf("Enter a C expression: ");
    fgets(input, 100, stdin);

    char *token = strtok(input, " \t\n");

    while (token != NULL)
    {
        if (isKeyword(token))
        {
            printf("%s is a keyword\n", token);
        }
        else if (isIdentifier(token))
        {
            printf("%s is an identifier\n", token);
        }
        else if (isNumber(token))
        {
            printf("%s is a number\n", token);
        }

        for (int i = 0; i < strlen(token); i++)
        {
            if (isOperator(token[i]))
            {
                printf("%c is an operator\n", token[i]);
            }
            if (isPunctuation(token[i]))
            {
                printf("%c is a punctuation\n", token[i]);
            }
        }
        token = strtok(NULL, " \t\n");
    }

    return 0;
}
