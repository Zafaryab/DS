#include <stdio.h>
typedef struct
{
    int age;
    float weight;
} person;
void main()
{
    person per, *per_ptr;
    per_ptr = (person *)malloc(sizeof(person));

    printf("Enter the age: ");
    scanf("%d", &per_ptr->age);
    printf("Enter the weight: ");
    scanf("%f", &per_ptr->weight);

    printf("\nAge=%d, Weight=%.2f Kgs", per_ptr->age, per_ptr->weight);
    free(per_ptr);
    printf("\nAge=%d, Weight=%.2f Kgs\n\n\n.", per_ptr->age, per_ptr->weight);
}