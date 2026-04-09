#include <stdio.h>

int main(){
    float arr[5];
    for(int i=0;i<5;i++){
        scanf("%f", &arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%.2f",arr[i]);
    }
    return 0;
}