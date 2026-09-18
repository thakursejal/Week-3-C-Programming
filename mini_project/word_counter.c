#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[500];
    char *ptr;
    int words = 0;

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    ptr = text;

    while (*ptr != '\0')
    {
        if ((*ptr != ' ' && *ptr != '\n' && *ptr != '\t') &&
            (ptr == text || (*(ptr - 1) == ' ' ||
                             *(ptr - 1) == '\n' ||
                             *(ptr - 1) == '\t')))
        {
            words++;
        }

        ptr++;
    }

    printf("Number of words: %d\n", words);

    return 0;
}
