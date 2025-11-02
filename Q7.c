//  Develop a C program to print a binary pyramid pattern.
// 0             0
// 01           01
// 010       010
// 0101    0101
// 0101001010

#include <stdio.h>

int main()
{
    int i, j, space, rows = 5;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 1)
                printf("0");
            else
                printf("1");
        }

        space = (rows - i) * 2;
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 1)
                printf("0");
            else
                printf("1");
        }

        printf("\n");
    }

    return 0;
}
