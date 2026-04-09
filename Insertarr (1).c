#include <stdio.h>

int main(){
    int arr [10] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int idx = 5;
    int val = 99;
    arr[idx] = val;
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}