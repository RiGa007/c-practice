// Binary Search: A phonebook app needs to find a contact's position
// quickly in a sorted list of names. By splitting the search area in half each
// time, you find the result much faster than linear search.
// • Test Case 1: Search 10 in [2, 5, 8, 10, 12] → Index 3
// • Test Case 2: Search 3 in [1, 5, 9] → Not Found
// • Test Case 3: Search 1 in [1, 2, 3] → Index 0

#include <stdio.h>

int binary_search(int arr[], int size, int elem){
    int low = 0;
    int high = size-1;
    while(low<=high){
        int mid = (low + high) / 2;
        if (arr[mid] == elem)
            return mid;
        else if(arr[mid]<elem){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    int size, elem;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter elem: ");
    scanf("%d", &elem);
    int result= binary_search(arr, size, elem);
    printf("Found at index %d", result);
    return 0;

}