#include <stdio.h>
insertionSort(int *a, int n);
void main()
{
    int n;
    int a[10];
    printf("Enter the array size: ");
    scanf("%d", &n);

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
    insertionSort(a, n);
    printf("\n\nAfter Sorting:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%4d  ", a[i]);
    }
    printf("\n");
}
insertionSort(int *a, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        printf("\n");
        temp = a[i];
        for (j = i; j > 0; j--)
        {
            if (a[j - 1] > temp)
            {
                a[j] = a[j - 1];
            }
            else
                break;
        }
        a[j] = temp;

        printf("Pass%2d:\t\t", i + 1);
        for (int k = 0; k < n; k++)
            printf("%4d  ", a[k]);
        printf("\n");
    }
}
