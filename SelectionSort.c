#include <stdio.h>
selectionSort(int *a, int n);
void main()
{
    int n;

    printf("Enter the array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d integer numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n\nInitial Array:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%4d  ", a[i]);
    }
    printf("\n");
    selectionSort(a, n);
    printf("\n\nAfter Sorting:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%4d  ", a[i]);
    }
    printf("\n");
}
selectionSort(int *a, int n)
{
    int min, j, i;
    for (i = 0; i < n; i++)
    {
        min = i;
        printf("\n");
        for (j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
        printf("Pass%2d:min%4d:\t", i + 1, a[i]);
        for (int k = 0; k < n; k++)
            printf("%4d  ", a[k]);
        printf("\n");
    }
}
