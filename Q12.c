// Develop a C program to find the maximum and minimum scores in an array, applying 
// comparative logic for ranking and analysis

#include <stdio.h>

int main() {
    int scores[] = {45, 88, 72, 99, 34, 67};
    int size = sizeof(scores) / sizeof(scores[0]);
    int max = scores[0], min = scores[0];

    for (int i = 1; i < size; i++) {
        if (scores[i] > max)
            max = scores[i];
        if (scores[i] < min)
            min = scores[i];
    }

    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);
    return 0;
}
