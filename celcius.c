#include <stdio.h>

int main() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", c, f);

    return 0;
}