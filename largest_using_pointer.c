#include <stdio.h>

int main() {
    int numbers[5];
    int *ptr;
    int largest;
    
    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    ptr = numbers;
    largest = *ptr;

    for (int i = 1; i < 5; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    printf("\nLargest Number: %d\n", largest);

    return 0;
}
