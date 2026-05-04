// Goal: Use pointers to find the average of even numbers in an array (1 decimal place).

#include <stdio.h>

int main() {
    int N;    
    // Read the size of the array
    scanf("%d", &N);
    
    int arr[N];
    
    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize variables for sum and count of even numbers
    int sum_even = 0;
    int count_even = 0;
    
    // Pointer pointing to the first element of the array
    int *ptr = arr; 

    // Iterate through the array using the pointer
    for (int i = 0; i < N; i++) {
        // Dereference the pointer to check if the value is even
        if (*ptr % 2 == 0) {
            sum_even += *ptr;
            count_even++;
        }
        // Move the pointer to the next element
        ptr++; 
    }
    
    // Calculate and print the average
    if (count_even > 0) {
        double average = (double)sum_even / count_even;
        printf("%.1f\n", average);
    } else {
        // Handle the case where there are no even numbers (like Input 3)
        printf("0.0\n");
    }
    
    return 0;
}