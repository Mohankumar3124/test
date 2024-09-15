#include <stdio.h>
#include <stdlib.h>

void countOccurrences(FILE *file);

int main()
{
    FILE *file;
    char fileName[100];

    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    file = fopen(fileName, "r");

    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    countOccurrences(file);

    fclose(file);

    return 0;
}

void countOccurrences(FILE *file)
{
    int frequency[256] = {0}; // Assuming ASCII characters

    char c;

    while ((c = fgetc(file)) != EOF)
    {
        frequency[c]++;
    }

    printf("Character occurrences in the file:\n");
    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] > 0)
        {
            printf("'%c': %d times\n", i, frequency[i]);
        
        }
        
    }
}