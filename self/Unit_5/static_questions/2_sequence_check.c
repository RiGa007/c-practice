// Problem Statement:Write a C program that dynamically allocates memory to store a 
// sequence of $N$ integers, where $N$ is always an even number. Determine if the 
// sequence is symmetrical—meaning the first half of the sequence identically matches 
// the reverse of the second half.Output:Print "Yes, the code is symmetrical." if the condition is met.
// Print "No, the code is not symmetrical." if it is not.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    // Read the size of the security code sequence
    scanf("%d", &N);

    // Dynamically allocate memory for the sequence using malloc
    int *code = (int *)malloc(N * sizeof(int));
    

    // Read the security code elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &code[i]);
    }

    // Evaluate the symmetry of the sequence
    int is_symmetric = 1; // Assume symmetric until proven otherwise
    
    // Loop through the first half and compare with the reverse of the second half
    for (int i = 0; i < N / 2; i++) {
        if (code[i] != code[N - 1 - i]) {
            is_symmetric = 0; // Mismatch found, not symmetric
            break;            // No need to check further
        }
    }

    // Output the appropriate message based on the evaluation
    if (is_symmetric) {
        printf("Yes, the code is symmetrical.\n");
    } else {
        printf("No, the code is not symmetrical.\n");
    }

    // Free the dynamically allocated memory to prevent memory leaks
    free(code);

    return 0;
}