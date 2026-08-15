/*
 * Topic: Variables, Data Types, sizeof operator
 */
#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14f;
    double c = 3.141592653589793;
    char ch = 'A';
    long l = 100000L;
    unsigned int u = 25;

    printf("int a = %d, size = %zu bytes\n", a, sizeof(a));
    printf("float b = %.2f, size = %zu bytes\n", b, sizeof(b));
    printf("double c = %.10lf, size = %zu bytes\n", c, sizeof(c));
    printf("char ch = %c, ASCII = %d, size = %zu byte\n", ch, ch, sizeof(ch));
    printf("long l = %ld, size = %zu bytes\n", l, sizeof(l));
    printf("unsigned int u = %u, size = %zu bytes\n", u, sizeof(u));

    return 0;
}
