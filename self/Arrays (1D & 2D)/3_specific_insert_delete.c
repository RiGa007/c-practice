// Write a program to insert an element at a specific position,
// in an array, and another function to delete an element from a specific position.

#include <stdio.h>
void insertElement(int arr[], int *size, int position, int element){
    for(int i=*size; i>position; i--){
        arr[i]= arr[i-1];
    }
    arr[position]= element;
    (*size)++;
}

void deleteElement(int arr[], int *size, int position){
    for(int i = position; i<*size; i++){
        arr[i]= arr[i+1];
    }
    (*size)--;
}
int main()
{
    int arr[100] = {6,4,32,57,8,35,76,99,12,43};
    int size = 10;
    int position, element;
    printf("Enter the position to insert an element: ");
    scanf("%d", &position);
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    insertElement(arr, &size, position, element);
    printf("Array after insertion: ");
    for(int i= 0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the position to delete an element: ");
    scanf("%d", &position);
    deleteElement(arr, &size, position);
    printf("Array after deletion: ");
    for(int i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}