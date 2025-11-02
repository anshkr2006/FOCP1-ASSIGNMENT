// Construct a C program to find the HCF (Highest Common Factor) of two integers using
// iterative or recursive logic — a core operation in optimisation algorithms and cryptographic
// computations

// 1) ITERATIVE :-

#include <stdio.h>

int main()
{
    int a, b, hcf;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    // a and b always +ve
    if (a == 0 && b == 0)
    {
        printf("HCF not defined for both zeros\n");
        return 0;
    }

    int min = (a < b) ? a : b;

    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d\n", a, b, hcf);
    return 0;
}

// 2) RECURSIVE
#include <stdio.h>

// Recursive function for HCF
int hcf(int a, int b)
{
    if (b == 0)
        return a;
    else
        return hcf(b, a % b);
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("HCF of %d and %d is %d\n", a, b, hcf(a, b));
    return 0;
}
