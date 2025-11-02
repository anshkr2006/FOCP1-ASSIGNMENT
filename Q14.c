// Develop a C program to count the number of prime numbers in an array

#include <stdio.h>

int main() {
    int arr[] = {3, 4, 7, 10, 13, 18, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, count = 0, Prime;

    for (i = 0; i < size; i++) {
        if (arr[i] < 2)
            continue;

        Prime = 1;
        for (j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                Prime = 0;
                break;
            }
        }

        if (Prime)
            count++;
    }

    printf("Number of prime numbers in the array: %d\n", count);
    return 0;
}
