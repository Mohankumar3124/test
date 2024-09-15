#include <stdio.h>

#include <string.h>
void del_the(char *line)
{
    int i, j;
    for (i = 0; line[i] != '\0'; i++)
        if ((line[i] == 't' || line[i] == 'T') && (line[i + 1] == 'h' || line[i + 1] == 'H') && (line[i + 2] == 'E' || line[i + 2] == 'e'))
            for (j = i; line[j] != '\0'; j++)
                line[j] = line[j + 4]; /*The word is skipped and other words are saved in the
               string*/
}
int main()
{
    char line[80];
    puts("Enter the line");
    gets(line);
    del_the(line);
    puts("\nAfter removing all the words 'The'.\n\n");
    puts(line);
    _getch();
    return 0;
}