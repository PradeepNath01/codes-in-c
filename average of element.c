/* find average element */
#include<stdio.h>

int main() {
    int i, a[10], sum = 0;
    float avg;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = sum / 10.0; // Use 10.0 to ensure floating-point division
    printf("\nAverage = %f\n", avg);
    return 0;
}
