// This program works for both ascending and descending order..
#include <stdio.h>
int binarySearch(int a[], int n, int item);
void main()
{
    int n, item, loc;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d integer number in sorted (asc or dsc) form:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the item to be searched: ");
    scanf("%d", &item);
    loc = binarySearch(a, n, item);
    if (loc == -1)
        printf("\nItem not found\n\n");
    else
        printf("\nLocation of element %d = %d (index value)\n\n", item, loc);
}
int binarySearch(int *data, int n, int item)
{
    int beg = 0, end = n - 1, mid = (beg + end) / 2, c = 0, l;
    l = (data[0] < data[n - 1]) ? 1 : 0;
    while (beg < end && data[mid] != item)
    {
        printf("Pass%d: beg = %d, mid = %d, end = %d\n", ++c, beg, mid, end);
        if (item < data[mid])
        {
            if (l == 1)
                end = mid - 1;
            else
                beg = mid + 1;
        }

        else
        {
            if (l == 1)
                beg = mid + 1;
            else
                end = mid - 1;
        }
        mid = (beg + end) / 2;
    }
    if (data[mid] == item)
    {
        printf("Pass%d: beg = %d, mid = %d, end = %d\n", ++c, beg, mid, end);
        return mid;
    }
    else
        return -1;
}
