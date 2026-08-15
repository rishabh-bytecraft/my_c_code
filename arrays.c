/*
 * Topic: 1D Arrays, 2D Arrays, Array Traversal, Searching, Sorting
 */
#include <stdio.h>

int main() {
    printf("--- 1D Array: Declaration and Traversal ---\n");
    int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    printf("\n--- Linear Search ---\n");
    int key = 30, found = -1;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }
    if (found != -1)
        printf("%d found at index %d\n", key, found);
    else
        printf("%d not found\n", key);

    printf("\n--- Bubble Sort ---\n");
    int unsorted[6] = {64, 34, 25, 12, 22, 11};
    int n = 6;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (unsorted[j] > unsorted[j + 1]) {
                int temp = unsorted[j];
                unsorted[j] = unsorted[j + 1];
                unsorted[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", unsorted[i]);
    printf("\n");

    printf("\n--- 2D Array: Matrix Display ---\n");
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    printf("\n--- Sum of Array Elements ---\n");
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += arr[i];
    printf("Sum = %d\n", sum);

    return 0;
}
