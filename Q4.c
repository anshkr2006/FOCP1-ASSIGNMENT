// Implement a C program to swap two numbers using four different methods, demonstrating 
// diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable 
// usage — a key skill in memory and variable management

#include <stdio.h>

int main() {
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    int oga=a;
    int ogb=b;
    printf("original a=%d and b=%d\n",a,b);
    //temp variable
    a=oga;
    b=ogb;
    int temp=a;
    a=b;
    b=temp;
    printf("temp a=%d and b=%d\n", a, b);
    //arithmetic
    a=oga;
    b=ogb;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("arithmetic a=%d and b=%d\n", a, b);
    //xor
    a=oga;
    b=ogb;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("xor a=%d and b=%d\n", a, b);
    
    return 0;
}