// //   Develop a C program to check whether a given number is an Armstrong number or not, 
// // demonstrating understanding of number manipulation and digit-based computations used in digital 
// // verification systems

#include <stdio.h>

int main() {
    int num, original, remainder, digits = 0;
    int result = 0;

    // Here we are taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // This loop counts the number of digits in a number  
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

   // This line gives the last digit
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++) {
            power = power * remainder;
        }

        result += power;
        temp /= 10;
    }

    if (result == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is NOT an Armstrong number\n", original);

    return 0;
}
