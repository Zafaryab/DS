#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int a = 5, b = 10;
    printf("Before:\ta=%d\tb=%d\n", a, b);
    swap(&a, &b);
    printf("After:\ta=%d\tb=%d", a, b);
}