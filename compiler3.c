#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Function to check if the given string is a C keyword
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
    FILE *file;
    char path[100];
    char word[50];
    int keywordCount = 0;

    printf("Enter source file path: ");
    scanf("%s", path);

    file = fopen(path, "r");

    if (file == NULL) {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }

    while (fscanf(file, "%s", word) != EOF) {
        if (isKeyword(word)) {
            keywordCount++;
        }
    }

    printf("\nTotal keywords in the file: %d\n", keywordCount);

    fclose(file);

    return 0;
}
