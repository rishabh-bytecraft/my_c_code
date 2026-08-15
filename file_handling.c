/*
 * Topic: File Handling Basics - fopen, fprintf, fscanf, fclose
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;

    printf("--- Writing to a file ---\n");
    fp = fopen("student_data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fprintf(fp, "Roll: 1, Name: Anita, Marks: 91.0\n");
    fprintf(fp, "Roll: 2, Name: Bibek, Marks: 76.5\n");
    fclose(fp);
    printf("Data written to student_data.txt\n");

    printf("\n--- Reading from a file ---\n");
    char buffer[100];
    fp = fopen("student_data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);

    printf("\n--- Appending to a file ---\n");
    fp = fopen("student_data.txt", "a");
    fprintf(fp, "Roll: 3, Name: Chitra, Marks: 85.2\n");
    fclose(fp);
    printf("Appended new record.\n");

    return 0;
}
