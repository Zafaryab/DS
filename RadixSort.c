#include<stdio.h>
radixSort(int *a, int n);
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
    radixSort(a, n);
    printf("\n\nAfter Sorting:\t");
    for(int i=0;i<n;i++)
    {
        printf("%4d  ",a[i]);
    }
     printf("\n");
}
radixSort(int *a, int n)
{
    int i, j, mat[n][10], c=0, x=1, col;

    for(i=0;i<3;i++)
    {
        for(int k=0;k<n;k++)
        {
            for(j=0;j<10;j++)
                mat[k][j]=-9999;
        }
        c=0;
        for(j=0;j<n;j++)
        {
            col = ((a[c]/x)%10);
            mat[j][col]=a[c++];
        }
        x=x*10;
        printf("Pass%d:\n",i+1);

        for(int k=0; k<n;k++)
        {
            for(j=0;j<10;j++)
            {
                if(mat[k][j] == -9999)
                    printf("      ");
                else
                    printf("%4d  ",mat[k][j]);
            }
            printf("\n");
        }
        c=0;
        for(j=0;j<10;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(mat[k][j] != -9999)
                    a[c++]=mat[k][j];
            }
        }


        printf("\n");
    }

}



