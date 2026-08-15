/*
 * Topic: Pointers, Pointer Arithmetic, Pointers with Arrays
 */
#include <stdio.h>

int main() {
    printf("--- Basic Pointers ---\n");
    int num = 42;
    int *ptr = &num;
    printf("num = %d\n", num);
    printf("Address of num = %p\n", (void*)&num);
    printf("ptr (holds address) = %p\n", (void*)ptr);
    printf("*ptr (value at address) = %d\n", *ptr);

    printf("\n--- Modifying value via pointer ---\n");
    *ptr = 100;
    printf("After *ptr = 100, num = %d\n", num);

    printf("\n--- Pointer Arithmetic with Arrays ---\n");
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    for (int i = 0; i < 5; i++) {
        printf("*(p+%d) = %d, arr[%d] = %d\n", i, *(p + i), i, arr[i]);
    }

    printf("\n--- Double Pointers ---\n");
    int x = 5;
    int *p1 = &x;
    int **p2 = &p1;
    printf("x = %d, *p1 = %d, **p2 = %d\n", x, *p1, **p2);

    printf("\n--- NULL Pointer ---\n");
    int *nptr = NULL;
    if (nptr == NULL)
        printf("nptr is NULL, safe to check before use.\n");

    return 0;
}
