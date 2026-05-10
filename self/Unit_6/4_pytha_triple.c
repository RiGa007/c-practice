#include <stdio.h>

struct Pythagorean{
    int a;
    int b;
    int c;
};

int main(){
    struct Pythagorean p;
    struct Pythagorean *ptr = &p;

    scanf("%d %d %d", &ptr->a, &ptr->b, &ptr->c);

    int is_pythagorean = 0;
    if ((ptr->a * ptr->a + ptr->b * ptr->b == ptr->c * ptr->c) ||
        (ptr->a * ptr->a + ptr->c * ptr->c == ptr->b * ptr->b) ||
        (ptr->b * ptr->b + ptr->c * ptr->c == ptr->a * ptr->a)) {
        is_pythagorean = 1;
    }

    
    if (is_pythagorean) {
        printf("Pythagorean triple.\n");
        
        // Check if it exactly matches the predefined special triples
        if ((ptr->a == 3 && ptr->b == 4 && ptr->c == 5) || 
            (ptr->a == 4 && ptr->b == 3 && ptr->c == 5) || 
            (ptr->a == 5 && ptr->b == 3 && ptr->c == 4)) {
            printf("Special triple.\n");
        } else {
            printf("Not a special triple.\n");
        }
    }
    else{
        printf("Not a Pythagorean triple.\n");
    }
    
    return 0;
}