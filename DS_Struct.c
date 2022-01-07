#include <stdio.h>
typedef struct
{
    int age;
    float weight;
} person;
void main()
{
    person per;

    printf("Enter the age: ");
    scanf("%d", &per.age);
    printf("Enter the weight: ");
    scanf("%f", &per.weight);

    printf("\nAge=%d, Weight=%.2f Kgs", per.age, per.weight);
}