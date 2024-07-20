/* fibonacii series using recursive function */
#include <stdio.h>

int fibonacci(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int x, y, i;
    printf("How many terms in series: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++) {
        y = fibonacci(i);
        printf("%d\t", y);
    }
    return 0;
}
