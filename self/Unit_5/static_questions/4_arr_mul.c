// Problem Statement:
// Write a C program that dynamically allocates memory (malloc) for two input arrays 
// and one result array of size $N$. Read $N$ integers into both input arrays, 
// multiply their corresponding elements, store the products in the result array, and print the resulting sequence.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    // Read the size of the arrays
    scanf("%d", &N);

    // Dynamically allocate memory for the three arrays
    int *arr1 = (int *)malloc(N * sizeof(int));
    int *arr2 = (int *)malloc(N * sizeof(int));
    int *result = (int *)malloc(N * sizeof(int));


    // Read elements into the first array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr1[i]);
    }

    // Read elements into the second array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr2[i]);
    }

    // Multiply corresponding elements, store in result array, and print
    for (int i = 0; i < N; i++) {
        result[i] = arr1[i] * arr2[i];
        printf("%d ", result[i]);
    }
    

    return 0;
}