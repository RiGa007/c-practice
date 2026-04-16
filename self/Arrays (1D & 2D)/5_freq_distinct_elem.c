//Find the frequency of each distinct element in an array.
#include <stdio.h>
void frequency(int arr[], int size){
    int freq[100] = {0};
    for(int i=0; i<size; i++){
        freq[arr[i]]++;
    }
    for(int i=0; i<100; i++){
        if(freq[i]!=0){
        printf("%d\t%d\n", i, freq[i]);
    }
}
}

int main(){
    int arr[100]= {58,32,58,76,32,99,12,43,76,58};
    int size = 10;
    frequency(arr, size);
}