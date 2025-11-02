//  Develop a C program to traverse an array of scores, determine whether each score is even or 
// odd using conditional logic, and store them into two separate arrays — even_array and odd_array

#include <stdio.h>

int main() {
    int scores[] = {10, 15, 22, 33, 40};
    int even[10], odd[10];
    int i, e = 0, o = 0;

    for (i = 0; i < 5; i++) {
        if (scores[i] % 2 == 0) {
            even[e] = scores[i];
            e++;
        } else {
            odd[o] = scores[i];
            o++;
        }
    }

    printf("Even numbers: ");
    for (i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers: ");
    for (i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
