#include <stdio.h>
shellSort(int *a, int n);
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
    shellSort(a, n);
    printf("\n\nAfter Sorting:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%4d  ", a[i]);
    }
    printf("\n");
}
shellSort(int *a, int n)
{
    int c = 0, j;
    for (int i = n / 2; i; i--)
    {
        for (j = 0; (i + j) < n; j++)
        {
            if (a[j] > a[j + i])
            {
                int temp = a[j];
                a[j] = a[j + i];
                a[j + i] = temp;
            }
        }
        printf("Pass%d:\t\t", ++c);
        for (j = 0; j < n; j++)
            printf("%4d  ", a[j]);
        printf("\n");
    }
}
