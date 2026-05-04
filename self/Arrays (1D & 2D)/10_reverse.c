// Reverse: A developer needs to reverse the order of a "Recent Actions" log
// to show the oldest first. You must swap elements within the original array
// without creating a temporary "helper" array.
// • Test Case 1: [1, 2, 3] → [3, 2, 1]
// • Test Case 2: [10, 20] → [20, 10]
// • Test Case 3: [5, 4, 3, 2, 1] → [1, 2, 3, 4, 5]
#include <stdio.h>

int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    // Reverse the array in place
    for(int i=0; i<size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }

    // Print the reversed array
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0; 
}



#include <stdio.h>

// Reverse array in-place
void reverseArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;                                                                                 
    }
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}




// #include <stdio.h>

// int main(){
//     int size;
//     scanf("%d", &size);

//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }

//     int n = size;      // keep original length for printing
//     int i = 0;
//     size = size - 1;   // now 'size' is last index

//     while(i < size){
//         int temp = arr[i];
//         arr[i] = arr[size];
//         arr[size] = temp;
//         i++;
//         size--;        // moves from right side inward
//     }

//     for(int k = 0; k < n; k++){
//         printf("%d ", arr[k]);
//     }
//     return 0;
// }