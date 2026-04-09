#include <stdio.h>

int main(){
    int arr [6] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", n);
    int idx = 2;
    int val = 99;
    for (int i = idx; i < n - 1; i++){
        arr[i] = arr[i+1];
    }
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
