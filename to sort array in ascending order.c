/*#include<stdio.h>
int main()
{

    int i,j,temp,n,ar[20];
    printf("enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    for (i=0;i<n;i++)
        printf("%d",ar[i]);
    return 0;
} */
#include <stdio.h>

int main() {
    int i, j, temp, n, ar[20];

    // Read the size of the array
    printf("Enter the size of array: ");
    scanf("%d", &n);

    // Check if the size is within the valid range
    if (n > 20 || n <= 0) {
        printf("Invalid array size. Please enter a size between 1 and 20.\n");
        return 1; // Exit the program
    }

    // Read the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    // Bubble Sort algorithm
    for(i = 0; i < n-1; i++) {
        for (j = 0; j < n-1-i; j++) {
            if(ar[j] > ar[j+1]) {
                // Swap the elements
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");

    return 0;
}

