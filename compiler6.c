#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isKeyword(char *str) {
    char keywords[32][10] = {
        "auto", "break", "case", "char", "const", "continue", "default", "do",
        "double", "else", "enum", "extern", "float", "for", "goto", "if",
        "int", "long", "register", "return", "short", "signed", "sizeof", "static",
        "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"
    };

    for (int i = 0; i < 32; i++) {
        if (strcmp(keywords[i], str) == 0) {
            return true;
        }
    }

    return false;
}

int main() {
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isKeyword(str)) {
        printf("%s is a keyword.\n", str);
    } else {
        printf("%s is not a keyword.\n", str);
    }

    return 0;
}
