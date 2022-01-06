#include <stdio.h>
mergeSort(int *a, int lb, int ub);
merge(int *a, int lb, int mid, int ub);
display(int *a, int size);
input(int *a, int size);
void main()
{
    int n, i;
    printf("Enter the number of Elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Please enter the elements:\n");
    input(a, n);
    printf("\nBefore sorting:\t");
    display(a, n);
    mergeSort(a, 0, n - 1);
    printf("\n\nAfter Sorting:\t");
    display(a, n);
}
input(int *a, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Element %d:", i + 1);
        scanf("%d", &a[i]);
    }
}
display(int *a, int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("%4d  ", a[i]);
    }
}
mergeSort(int *a, int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        mergeSort(a, lb, mid);
        mergeSort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
    printf("\nPass:");
    display(a, ub + 1);
}
merge(int *a, int lb, int mid, int ub)
{
    int i, j, k = 0, ll = mid - lb + 1, lr = ub - mid, left[ll], right[lr];
    printf("\nll=%d&&lr=%d\n", ll, lr);
    for (i = lb; i <= mid; i++)
    {
        left[k++] = a[i];
    }
    printf("\nleft:");
    display(left, ll);
    k = 0;
    for (i = mid + 1; i <= ub; i++)
    {
        right[k++] = a[i];
    }
    printf("\nright:");
    display(right, lr);
    i = j = 0;
    k = lb;
    while (i < ll && j < lr)
    {
        if (left[i] < right[j])
            a[k++] = left[i++];
        else
            a[k++] = right[j++];
    }
    while (i < ll)
        a[k++] = left[i++];
    while (j < lr)
        a[k++] = right[j++];
}
