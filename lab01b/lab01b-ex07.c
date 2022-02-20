#include <stdio.h>

struct Person
{
    char name[20];
    int age;
    float weight;
    float height;
};

struct Person RegisterPerson()
{
    struct Person person;

    printf("Name: ");
    scanf("%s", person.name);

    printf("Age: ");
    scanf("%i", &person.age);

    printf("Weight: ");
    scanf("%f", &person.weight);

    printf("Height: ");
    scanf("%f", &person.height);

    return person;
}

void PrintPerson(struct Person person)
{
    printf("\nName: %s\n", person.name);
    printf("Age: %i\n", person.age);
    printf("Weight: %.2f\n", person.weight);
    printf("Height: %.2f\n", person.height);
}

int main()
{
    struct Person person_a;
    struct Person person_b;
    struct Person person_c;

    struct Person people[3];

    printf(">>> Person A: \n");
    person_a = RegisterPerson();
    people[0] = person_a;

    printf("\n>>> Person B: \n");
    person_b = RegisterPerson();
    people[1] = person_b;

    printf("\n>>> Person C: \n");
    person_c = RegisterPerson();
    people[2] = person_c;
    
    printf("\n===== All people =====\n");
    PrintPerson(people[0]);
    PrintPerson(people[1]);
    PrintPerson(people[2]);

    return 0;
}
