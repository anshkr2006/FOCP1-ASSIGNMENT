//  Design a C program to delete an element from the front, middle, or end of an array, and print 
// the array before and after deletion

#include <stdio.h>

int main() {
    int n,i,a,index;
    int arr[100];
    
    printf("enter the number of elements: ");
    scanf("%d", &n);
   
    printf("enter %d elements: ", n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("array before deletion: ");
    for (i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("enter position (0: front, 1: middle, 2: end): ");
    scanf("%d",&a);
    
    int c=n-1;
    switch (a) {
        case 0:
            index=0;
            for (i=1;i<n;i++) {
                arr[i-1]=arr[i];
            }
            break;
        case 1:
            index=n/2;
            for (i=index+1;i<n;i++) {
                arr[i-1]=arr[i];
            }
            break;
        case 2:
            index=n-1;
            break;
    }
    printf("array after deletion: ");
    for (i=0;i<c;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}