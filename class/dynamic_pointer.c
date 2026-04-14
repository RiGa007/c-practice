#include <stdio.h>
#include <stdlib.h>

int main (){
    int *p = calloc(5, sizeof(int));
    *(p+0)= 2;
    *(p+1) = 4;

    free(p);
    for(int i=0; i<5; i++){
        printf("%d", *(p+i));
    }
    return 0;
}