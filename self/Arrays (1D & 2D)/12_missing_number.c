// Missing Number: A ticket counter sold tickets 1 to N, but one is missing;
// find which ticket was lost. Use the mathematical formula for the sum of N
// natural numbers to find the gap efficiently.
// • Test Case 1: [1, 2, 4, 5] (N=5) → 3
// • Test Case 2: [2, 3, 1, 5] (N=5) → 4
// • Test Case 3: [1, 2, 3] (N=4) → 4
#include <stdio.h>
int missing(int arr[], int n){
    int expected = n*(n+1)/2;
    int actual = 0;
    for(int i=0; i<n-1; i++){
        actual+= arr[i];
    }
    int missing = expected - actual;
    printf("Missing number: %d\n", missing);
    return missing;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n-1];
    for(int i=0; i<n-1; i++){
        scanf("%d", &arr[i]);
    }
    missing(arr, n);
    return 0;
}