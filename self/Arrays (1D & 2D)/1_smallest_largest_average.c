//Find the largest, smallest, and average of an array of N integers.

#include <stdio.h>
int main() {
	int arr[] = {10, 20, 5, 15, 25};
	int size = sizeof(arr) / sizeof(arr[0]);
    int small = arr[0];
    int large = arr[0];
    float sum = 0;
    for(int i=0; i<size; i++){
        if (arr[i]> large){
            large = arr[i];
        }
        if (arr[i]< small){
            small = arr[i];
        }
        
        sum += arr[i];
    }

    float avg = (float)sum/ size;
    printf("%d\n", small);
    printf("%d\n", large);
    printf("%.2f\n", avg);

    return 0;
    }