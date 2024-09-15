#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *file;
    char path[100];

    char ch;
    int characters, words, lines;

    printf("Enter source file path: ");
    scanf("%s", path);

    file = fopen(path, "r");
    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {

        if (ch == '\n' )
            lines++;

        else if (ch == ' ' )
            words++;
            else 
            characters++;
    }

    // if (characters > 0)
    // {
    //     words++;
    //     lines++;
    // }

    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);

    fclose(file);

    return 0;
}