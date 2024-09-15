#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// List of C operators
char *operators[] = {"+", "-", "*", "/", "%", "++", "--", "==", "!=", ">", "<",
                     ">=", "<=", "&&", "||", "!", "&", "|", "^", "~", "<<", ">>",
                     "=", "+=", "-=", "*=", "/=", "%=", "<<=", ">>=", "&=", "|=",
                     "^="};

int main() {
    FILE *file;
    char filename[100];
    char character;
    int operatorCount = 0;

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file
    file = fopen(filename, "r");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Unable to open file.");
        exit(EXIT_FAILURE);
    }

    // Loop through each character in the file
    while ((character = fgetc(file)) != EOF) {
        // Check if character is an operator
        for (int i = 0; i < sizeof(operators) / sizeof(operators[0]); i++) {
            if (strchr(operators[i], character) != NULL) {
                operatorCount++;
                break;
            }
        }
    }

    // Close the file
    fclose(file);

    // Print the count of operators
    printf("Total operators: %d\n", operatorCount);

    return 0;
}
