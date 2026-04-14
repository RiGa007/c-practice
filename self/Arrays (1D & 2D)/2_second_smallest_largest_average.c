//Find the second largest and second smallest element in an array in a single pass.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[] = {13,53,32,123,5,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int large = arr[0];
    int small = arr[0];
    int sec_small = arr[1];
    int sec_largest = arr[size-2];

    for(int i=0; i<size; i++){
        if (arr[i]>large){
            sec_largest = large;
            large = arr[i];
        }
        else if (arr[i]>sec_largest && arr[i]!=large){
            sec_largest = arr[i];
        }
        
        if (arr[i]<small){
            sec_small = small;
            small = arr[i];
        }
        else if (arr[i]<sec_small && arr[i]!=small){
            sec_small = arr[i];
        }
    }

    printf("Second Smallest: %d\n", sec_small);
    printf("Second Largest: %d\n", sec_largest);

    return 0;
}
// int main() {
// int arr[] = {13,53,32,123,5,3};
// int size = sizeof(arr)/sizeof(arr[0]);
// int large = 0;
// int small = 0;
// int sec_small = arr[1];
// int sec_largest = arr[size-2];

// // for(int i=0; i<size; i++){
// //     if arr[i]>large;
// //     large = arr[i];
// //     sorted = 
// }