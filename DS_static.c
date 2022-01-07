#include <stdio.h>
int inc()
{
    int i = 1; // static
    printf("%d\n", i++);
}
void main()
{
    inc();
    inc();
    inc();
}