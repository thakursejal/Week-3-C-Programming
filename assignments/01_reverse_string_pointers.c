#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    char *start, *end;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    start = str;
    end = str + strlen(str) - 1;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
