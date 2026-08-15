/*
 * Topic: Function Declaration, Definition, Call
 *        Call by Value vs Call by Reference, Recursion
 */
#include <stdio.h>

// Function prototypes
int add(int a, int b);
void swapByValue(int x, int y);
void swapByReference(int *x, int *y);
long factorial(int n);
int fibonacci(int n);

int main() {
    printf("--- Simple Function Call ---\n");
    printf("add(5, 7) = %d\n", add(5, 7));

    printf("\n--- Call by Value (no change reflected) ---\n");
    int a = 10, b = 20;
    printf("Before: a=%d b=%d\n", a, b);
    swapByValue(a, b);
    printf("After:  a=%d b=%d\n", a, b);

    printf("\n--- Call by Reference (change reflected) ---\n");
    printf("Before: a=%d b=%d\n", a, b);
    swapByReference(&a, &b);
    printf("After:  a=%d b=%d\n", a, b);

    printf("\n--- Recursion: Factorial ---\n");
    printf("5! = %ld\n", factorial(5));

    printf("\n--- Recursion: Fibonacci Series ---\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", fibonacci(i));
    printf("\n");

    return 0;
}

int add(int a, int b) {
    return a + b;
}

void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void swapByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
