/*
 * Topic: Pattern Printing using nested loops (common first-semester exercise)
 */
#include <stdio.h>

int main() {
    int n = 5;

    printf("--- Right Triangle of Stars ---\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    printf("\n--- Inverted Right Triangle ---\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    printf("\n--- Pyramid ---\n");
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf("  ");
        for (int j = 1; j <= (2 * i - 1); j++)
            printf("* ");
        printf("\n");
    }

    printf("\n--- Number Triangle ---\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
