// Linear Search: A librarian wants to check if a specific "Book ID" exists in a
// list of 500 returned books. If found, print the index (shelf location);
// otherwise, inform the user the book is missing.
// • Test Case 1: Search 3 in [1, 3, 5] → Found at Index 1
// • Test Case 2: Search 7 in [1, 3, 5] → Not Found
// • Test Case 3: Search 10 in [10, 20, 30] → Found at Index 0

#include <stdio.h>

int linearsearch(int arr[], int n, int t){
    for(int i = 0; i < n; i++){
        if(arr[i] == t){ 
            return i;
        }
    }
    return -1;
}

int main(){
    int n, t;
    int arr[500];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Value to search: ");
    scanf("%d", &t);

    printf("Enter %d array elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int result = linearsearch(arr, n, t);

    if(result != -1){
        printf("Element found at index %d\n", result);
    } else {
        printf("Not found\n");
    }

    return 0;
}