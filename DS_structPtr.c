#include <stdio.h>
typedef struct
{
    int age;
    float weight;
} person;
void main()
{
    person per, *per_ptr;
    per_ptr = &per;
    printf("Enter the age: ");
    scanf("%d", &per_ptr->age);
    printf("Enter the weight: ");
    scanf("%f", &per_ptr->weight);

    printf("Age=%d, Weight=%.2f Kgs", per_ptr->age, per_ptr->weight);
}