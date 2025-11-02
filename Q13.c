// Design a c program to find a peak element that is not smaller than its neighbours

#include <stdio.h>

int findPeak(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int left = (i == 0) || (arr[i] >= arr[i - 1]);
        int right = (i == n - 1) || (arr[i] >= arr[i + 1]);
  if (left && right) {
            return arr[i]; 
        }
    }
    return -1; 
}
int main() {
    int arr[] = {5, 10, 20, 15, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int peak = findPeak(arr, size);

    if (peak != -1)
        printf("Peak element is: %d\n", peak);
    else
        printf("No peak element found\n");

    return 0;
}
