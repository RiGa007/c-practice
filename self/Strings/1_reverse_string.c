// Reverse Echo: A game asks a child to say a word, and the "robot" repeats it backwards.
// • Test Case 1: "Hello" → "olleH"
// • Test Case 2: "12345" → "54321"
// • Test Case 3: "A" → "A"
#include <stdio.h>
#include <string.h>

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
    
//     int len = strlen(str) - 1; // Subtract 1 to exclude newline character
//     printf("Reversed string: ");
//     for (int i = len; i >= 0; i--) {
//         printf("%c", str[i]);
//     }
//     printf("\n");
    
//     return 0;
// }

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str)-1;

    for(int i = len; i>=0; i--){
        printf("%c", str[i]);
    }
    return 0;
}