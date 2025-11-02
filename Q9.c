//  Design a C program to find the first occurrence of the score “99” in an array, focusing on linear 
// search and data retrieval techniques

#include <stdio.h>

int main() {
    int scores[50], total, i;
    printf("Enter number of scores: ");
    scanf("%d", &total);

    printf("Enter the scores:\n");
    for (i = 0; i < total; i++) {
        scanf("%d", &scores[i]);
    }

    int found = -1;
    for (i = 0; i < total; i++) {
        if (scores[i] == 99) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("First 99 found at position: %d\n", found);
    } else {
        printf("Score 99 not found.\n");
    }

    return 0;
}
