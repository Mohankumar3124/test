#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Function to implement DFA for identifiers
bool isIdentifier(char *str) {
    if (!isalpha(str[0]) && str[0] != '_')
        return false;

    for (int i = 1; i < strlen(str); i++) {
        if (!isalpha(str[i]) && !isdigit(str[i]) && str[i] != '_')
            return false;
    }

    return true;
}

// Function to implement DFA for constants
bool isConstant(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i]))
            return false;
    }

    return true;
}

// Function to implement DFA for operators
bool isOperator(char *str) {
    char operators[7][3] = {"+", "-", "*", "/", "%", "=", "=="};

    for (int i = 0; i < 7; i++) {
        if (strcmp(operators[i], str) == 0)
            return true;
    }

    return false;
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (isIdentifier(input))
        printf("%s is an identifier.\n", input);
    else if (isConstant(input))
        printf("%s is a constant.\n", input);
    else if (isOperator(input))
        printf("%s is an operator.\n", input);
    else
        printf("%s is unrecognized.\n", input);

    return 0;
}
