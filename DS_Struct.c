#include <stdio.h>
typedef struct
{
    int age;
    float weight;
    float phy;
} person;

void main()
{
    person per[10];
    int i = 3;
    // for (int i = 0; i < 2; i++)  //while          do-while
    do
    {
        printf("Enter the age: ");
        scanf("%d", &per[i].age);
        printf("Enter the weight: ");
        scanf("%f", &per[i].weight);
        i++;
    } while (i < 2);

    printf("\nAge=%d, Weight=%.2f Kgs", per[1].age, per[1].weight);
}