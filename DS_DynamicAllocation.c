#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    int *b = (int *)realloc(arr, 2 * n * sizeof(int));

    printf("prev=%p\tnew=%p\n", arr, b);
    for (int i = 0; i < 2 * n; i++)
    {

        printf("%d\t", arr[i]);
    }
}