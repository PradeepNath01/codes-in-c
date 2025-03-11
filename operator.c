#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int result;

    // Arithmetic Assignment Operators
    printf("Arithmetic Assignment Operators:\n");

    // Using +=
    result = a;
    result += b;  // a = a + b
    printf("a += b: %d + %d = %d\n", a, b, result);

    // Using -=
    result = a;
    result -= b;  // a = a - b
    printf("a -= b: %d - %d = %d\n", a, b, result);

    // Using *=
    result = a;
    result *= b;  // a = a * b
    printf("a *= b: %d * %d = %d\n", a, b, result);

    // Using /=
    result = a;
    result /= b;  // a = a / b
    printf("a /= b: %d / %d = %d\n", a, b, result);

    // Using %=
    result = a;
    result %= b;  // a = a % b
    printf("a %%= b: %d %% %d = %d\n", a, b, result);

    // Logical Operators
    printf("\nLogical Operators:\n");

    // Using && (AND)
    printf("a && b: %d && %d = %d\n", a, b, a && b);  // Logical AND

    // Using || (OR)
    printf("a || b: %d || %d = %d\n", a, b, a || b);  // Logical OR

    // Using ! (NOT)
    printf("!a: !%d = %d\n", a, !a);  // Logical NOT on a

    return 0;
}
