#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    swap(&a, &b);

    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
