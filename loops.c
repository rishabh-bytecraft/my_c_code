/*
 * Topic: for, while, do-while loops, break, continue, nested loops
 */
#include <stdio.h>

int main() {
    printf("--- for loop: First 10 natural numbers ---\n");
    for (int i = 1; i <= 10; i++)
        printf("%d ", i);
    printf("\n");

    printf("\n--- while loop: Sum of digits of 12345 ---\n");
    int n = 12345, sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits = %d\n", sum);

    printf("\n--- do-while loop: Print 1 to 5 ---\n");
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");

    printf("\n--- break and continue ---\n");
    for (int j = 1; j <= 10; j++) {
        if (j == 6) break;
        if (j % 2 == 0) continue;
        printf("%d ", j);
    }
    printf("\n");

    printf("\n--- Nested loop: Multiplication Table (1-5) ---\n");
    for (int a = 1; a <= 5; a++) {
        for (int b = 1; b <= 5; b++) {
            printf("%3d", a * b);
        }
        printf("\n");
    }

    return 0;
}
