/*
 * Topic: Strings, Character Arrays, string.h library functions
 */
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[100];

    printf("--- Basic String Printing ---\n");
    printf("str1 = %s, str2 = %s\n", str1, str2);

    printf("\n--- strlen() ---\n");
    printf("Length of str1 = %zu\n", strlen(str1));

    printf("\n--- strcpy() ---\n");
    strcpy(str3, str1);
    printf("str3 after strcpy = %s\n", str3);

    printf("\n--- strcat() ---\n");
    strcat(str3, " ");
    strcat(str3, str2);
    printf("str3 after strcat = %s\n", str3);

    printf("\n--- strcmp() ---\n");
    printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));
    printf("strcmp(str1, str1) = %d\n", strcmp(str1, str1));

    printf("\n--- Manual String Reversal ---\n");
    char word[] = "PROGRAM";
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        char temp = word[i];
        word[i] = word[len - 1 - i];
        word[len - 1 - i] = temp;
    }
    printf("Reversed = %s\n", word);

    printf("\n--- Palindrome Check ---\n");
    char pal[] = "madam";
    int isPalindrome = 1;
    int plen = strlen(pal);
    for (int i = 0; i < plen / 2; i++) {
        if (pal[i] != pal[plen - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    printf("%s is %s\n", pal, isPalindrome ? "a palindrome" : "not a palindrome");

    return 0;
}
