#include<stdio.h>
bubbleSort(int *a, int n);
void main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d integer numbers:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\nInitial Array:\t");
    for(int i=0;i<n;i++)
    {
        printf("%4d  ",a[i]);
    }
     printf("\n");
    bubbleSort(a, n);
    printf("\n\nAfter Sorting:\t");
    for(int i=0;i<n;i++)
    {
        printf("%4d  ",a[i]);
    }
     printf("\n");
}
bubbleSort(int *a, int n)
{
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        printf("\n");
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            printf("Pass%d.%d:\t",i+1,j+1);
            for(int k=0; k<n;k++)
                printf("%4d  ",a[k]);
            printf("\n");
        }
    }

}

