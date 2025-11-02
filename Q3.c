// Design a C program to subtract two integers without using the minus (-) operator, applying 
// bitwise operators. Highlight how such logic can be used in low-level arithmetic operations in 
// embedded systems or processors

#include <stdio.h>

int main() {
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    int neg=~b;
    int c=1;
    while (c!=0) {
        int temp=neg&c;
        neg=neg^c;
        c=temp<<1;
    }
    
    int r=a;
    c=neg;
    while (c!=0) {
        int temp=r&c;
        r=r^c;
        c=temp<<1;
    }
    
    printf("%d - %d is: %d\n", a, b, r);
    
    return 0;
}
