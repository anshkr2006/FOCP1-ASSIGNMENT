// Develop a program to identify and print duplicate elements in an array, or print “-1” if no 
// duplicates exist, applying frequency detection and data validation. 

#include <stdio.h>

int main() {
    int n,i,j;
    int arr[100];
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter %d elements: ",n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int f=0;
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if (arr[i]==arr[j]) {
                printf("%d ",arr[i]);
                f=1;
                while (j<n && arr[i]==arr[j]) j++;
                break;
            }
        }
    }
    
    if (f==0) {
        printf("-1\n");
    } else {
        printf("\n");
    }
    
    return 0;
}