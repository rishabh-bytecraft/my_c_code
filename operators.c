/*
 * Topic: Arithmetic, Relational, Logical, Bitwise, Assignment,
 *        Increment/Decrement, Ternary Operators
 */
#include <stdio.h>

int main() {
    int a = 15, b = 4;

    printf("--- Arithmetic Operators ---\n");
    printf("a+b=%d a-b=%d a*b=%d a/b=%d a%%b=%d\n",
           a + b, a - b, a * b, a / b, a % b);

    printf("\n--- Relational Operators ---\n");
    printf("a>b: %d, a<b: %d, a==b: %d, a!=b: %d\n",
           a > b, a < b, a == b, a != b);

    printf("\n--- Logical Operators ---\n");
    printf("(a>b)&&(b>0): %d, (a<b)||(b>0): %d, !(a>b): %d\n",
           (a > b) && (b > 0), (a < b) || (b > 0), !(a > b));

    printf("\n--- Bitwise Operators ---\n");
    printf("a&b=%d a|b=%d a^b=%d ~a=%d a<<1=%d a>>1=%d\n",
           a & b, a | b, a ^ b, ~a, a << 1, a >> 1);

    printf("\n--- Increment/Decrement ---\n");
    int x = 5;
    printf("x++ = %d, now x = %d\n", x++, x);
    printf("++x = %d, now x = %d\n", ++x, x);
    printf("x-- = %d, now x = %d\n", x--, x);
    printf("--x = %d, now x = %d\n", --x, x);

    printf("\n--- Ternary Operator ---\n");
    int max = (a > b) ? a : b;
    printf("Max of %d and %d is %d\n", a, b, max);

    return 0;
}
