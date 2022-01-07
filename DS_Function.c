#include <stdio.h>
void display(int a, int b)
{
    printf("a=%10d\n", a);
    printf("b=%10d\t", b);
}
void main()
{
    int a = 5;
    int b;

    scanf("%d", &b);
    display(a, b);
}