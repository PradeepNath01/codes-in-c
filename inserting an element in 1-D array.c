    #include<stdio.h>
#define max_size 100

int main() {
    int ar[max_size], i, size, num, pos;

    printf("Input the size of array: ");
    scanf("%d", &size);

    printf("\nInput elements:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &ar[i]);
    }

    printf("\nInput element and position to insert:\n");
    scanf("%d%d", &num, &pos);

    if (pos > size + 1 || pos < 1) {
        printf("\nInvalid position! Please enter position between 1 and %d\n", size + 1);
    } else {
        // Make room for new element by shifting array to the right
        for(i = size; i >= pos; i--) {
            ar[i] = ar[i - 1];
        }

        // Insert new element at given position & increment size
        ar[pos - 1] = num;
        size++;

        // Print array elements
        printf("Array elements are: ");
        for (i = 0; i < size; i++) {
            printf("%d ", ar[i]);
        }
        printf("\n");
    }

    return 0;
}


