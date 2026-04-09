#include <stdio.h>

int main(){    int arr [6] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", n);
    int idx = 0;
    int val = 99;
    for (int i = n-2; i >= idx; i--){
        arr[i+1] = arr[i];
    }
    arr[idx] = val;
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}