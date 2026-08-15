/*
 * Topic: Structures, Nested Structures, Array of Structures
 */
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Address {
    char city[30];
    int pincode;
};

struct Employee {
    char name[50];
    struct Address addr;  // nested structure
};

int main() {
    printf("--- Basic Structure Usage ---\n");
    struct Student s1;
    strcpy(s1.name, "Rahul");
    s1.roll = 101;
    s1.marks = 88.5;
    printf("Name: %s, Roll: %d, Marks: %.2f\n", s1.name, s1.roll, s1.marks);

    printf("\n--- Array of Structures ---\n");
    struct Student students[3] = {
        {"Anita", 1, 91.0},
        {"Bibek", 2, 76.5},
        {"Chitra", 3, 85.2}
    };
    for (int i = 0; i < 3; i++) {
        printf("Roll %d: %s scored %.2f\n",
               students[i].roll, students[i].name, students[i].marks);
    }

    printf("\n--- Nested Structure ---\n");
    struct Employee e1;
    strcpy(e1.name, "Suresh");
    strcpy(e1.addr.city, "Bhubaneswar");
    e1.addr.pincode = 751001;
    printf("Employee: %s, City: %s, Pincode: %d\n",
           e1.name, e1.addr.city, e1.addr.pincode);

    printf("\n--- Pointer to Structure ---\n");
    struct Student *sp = &s1;
    printf("Using pointer: Name = %s, Roll = %d\n", sp->name, sp->roll);

    return 0;
}
