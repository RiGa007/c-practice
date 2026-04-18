// Sum & Average: Anita wants to calculate the total and average marks of her
// class to find the overall performance. The program should prompt for the
// number of students and then take each mark as input before displaying the
// results.
// • Test Case 1: [10, 20, 30] → Sum: 60, Avg: 20.0
// • Test Case 2: [5, 5, 5, 5] → Sum: 20, Avg: 5.0
// • Test Case 3: [15, 25] → Sum: 40, Avg: 20.0

#include <stdio.h>
int main(){
    int size;
    int sum=0;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float avg = (float)sum/size;
    printf("Sum: %d, Avg: %.1f", sum, avg);

    return 0;
    
    }

