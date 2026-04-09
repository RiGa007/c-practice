#include <stdio.h>

int main(){
    int i = 72;
    int *j = &i; //j is pointing to i
    printf("%p", &i); //address of i
    printf("\n%p", j); //address of i
    char c = 'a';
    char *d = &c; //d is pointing to c
    printf("\n%p", &c); //address of c

    return 0;
}