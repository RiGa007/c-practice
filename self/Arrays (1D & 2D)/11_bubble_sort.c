// Bubble Sort: A teacher wants to arrange a small group of students from
// shortest to tallest using the simplest method possible. Implement the
// Bubble Sort algorithm and show the array after it is fully sorted.
// • Test Case 1: [5, 1, 4] → [1, 4, 5]
// • Test Case 2: [3, 2, 1] → [1, 2, 3]
// • Test Case 3: [1, 2, 3] → [1, 2, 3]

#include <stdio.h>
void bubble_sort(int arr[], int n){
    int temp = 0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }


        }
    }
}

int main(){
    int n;
    int arr[50];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }
    bubble_sort(arr, n);

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}