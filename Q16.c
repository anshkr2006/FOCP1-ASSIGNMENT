// Implement a C program to insert an element at the front, middle, or end of an array, and print 
// the array before and after insertion

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value, choice;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\nChoose insertion position:\n");
    printf("1. Insert at front\n");
    printf("2. Insert in middle\n");
    printf("3. Insert at end\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    if (choice == 1) {
        pos = 0; // Front
    } else if (choice == 2) {
        pos = n / 2; // Middle
    } else if (choice == 3) {
        pos = n; // End
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++; 

    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
