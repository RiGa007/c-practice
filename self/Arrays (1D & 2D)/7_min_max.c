// Min/Max: A weather station needs to identify the highest and lowest
// temperatures recorded in a week. Ensure your code handles negative
// temperatures correctly if the sensor is in a cold region.
// • Test Case 1: [1, 9, 2, 8] → Max: 9, Min: 1
// • Test Case 2: [-5, 0, 15] → Max: 15, Min: -5
// • Test Case 3: [100, 100, 100] → Max: 100, Min: 100

#include <stdio.h>
int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]> max){
            max = arr[i];
        }
        else if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Max: %d\n Min: %d\n", max, min);
    return 0;

    
}