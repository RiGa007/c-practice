#include <stdio.h>

int main(){
    int arr[10] = {7,3,5,9,120,10,1,19,20,33};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0;i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}