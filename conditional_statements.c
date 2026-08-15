/*
 * Topic: if, if-else, else-if ladder, switch-case
 */
#include <stdio.h>

int main() {
    int num, grade_marks;
    char grade;

    printf("--- if-else: Check Even/Odd ---\n");
    num = 7;
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    printf("\n--- else-if ladder: Grade Calculator ---\n");
    grade_marks = 82;
    if (grade_marks >= 90)
        grade = 'A';
    else if (grade_marks >= 75)
        grade = 'B';
    else if (grade_marks >= 60)
        grade = 'C';
    else
        grade = 'F';
    printf("Marks: %d, Grade: %c\n", grade_marks, grade);

    printf("\n--- switch-case: Day of Week ---\n");
    int day = 3;
    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid day\n");
    }

    return 0;
}
