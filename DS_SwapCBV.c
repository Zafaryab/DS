#include <stdio.h>
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void main()
{
    int a = 5, b = 10;
    printf("Before:\ta=%d\tb=%d\n", a, b);
    swap(a, b);
    printf("After:\ta=%d\tb=%d", x, y);
}