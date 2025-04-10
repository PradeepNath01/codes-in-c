/*wreite a program that reads a point in rectangular coordinate system and
 display the appropriate message after checking where the pomt lies on the cordinate sysrtem,
  provided that the point does not lies in the any of the any of the axis. */
#include <stdio.h>

int main() {
    int x, y;

    // Prompt user to enter the coordinates
    printf("Enter the coordinates (x y): ");
    scanf("%d %d", &x, &y);

    // Check where the point lies
    if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in the first quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in the second quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in the third quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%d, %d) lies in the fourth quadrant.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The point (%d, %d) lies on the y-axis.\n", x, y);
    } else if (x != 0 && y == 0) {
        printf("The point (%d, %d) lies on the x-axis.\n", x, y);
    } else {
        printf("The point (%d, %d) is at the origin.\n", x, y);
    }

    return 0;
}