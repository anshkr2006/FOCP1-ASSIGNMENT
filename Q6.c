// Create a C program that allows the user to convert between Binary and Decimal systems based 
// on their choice, showcasing understanding of data encoding and computer number systems used in 
// hardware-level design. 

#include <stdio.h>

int main() {
    int choice;
    printf("1 binary to decimal\n2 decimal to binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int a,b=0,c=1,rem;
        printf("Enter binary: ");
        scanf("%d", &a);
        while (a > 0) {
            rem = a % 10;
            b=b+rem*c;
            a=a/10;
            c=c*2;
        }
        printf("decimal= %d\n",b);
    } 
    else if (choice == 2) {
        int a,b[20],i=0;
        printf("enter decimal: ");
        scanf("%d",&a);
        while (a>0) {
            b[i++]=a % 2;
            a=a/2;
        }
        printf("binary= ");
        for (int j=i-1;j>=0;j--)
            printf("%d",b[j]);
        printf("\n");
    } 
    else
        printf("invalid choice\n");

    return 0;
}