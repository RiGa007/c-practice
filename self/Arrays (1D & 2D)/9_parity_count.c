// Parity Count: A warehouse manager needs to count how many items have
// even-numbered IDs and how many have odd IDs for sorting into two
// different trucks. This helps in balancing the workload for the loading staff.
// • Test Case 1: [2, 4, 6, 7] → Even: 3, Odd: 1
// • Test Case 2: [1, 3, 5] → Even: 0, Odd: 3
// • Test Case 3: [2, 2, 8, 10] → Even: 4, Odd: 0

#include <stdio.h>

void parity(int arr[], int size){
    int even = 0;
    int odd = 0;
    for(int i=0; i<size; i++){
        if(arr[i]%2 == 0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    printf("Even: %d, Odd: %d\n", even, odd);

}
int main(){
    int size;
    int arr[500];
    printf("Size: ");
    scanf("%d", &size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    parity(arr, size);
    return 0;
}