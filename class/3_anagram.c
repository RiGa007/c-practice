// Anagram Check: Determine if two strings are anagrams (contain the same characters in a
// different order).
// • Test Case 1: "silent", "listen" → Yes
// • Test Case 2: "race", "care" → Yes
// • Test Case 3: "hello", "world" → No

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// int main() {
//     char str1[100], str2[100];
//     printf("Enter first string: ");
//     fgets(str1, sizeof(str1), stdin);
//     printf("Enter second string: ");
//     fgets(str2, sizeof(str2), stdin);

//     int len1 = strlen(str1) - 1;
//     int len2 = strlen(str2) - 1;

//     if (len1 != len2) {
//         printf("No\n");
//         return 0;
//     }

//     int count[256] = {0}; // Array to store character frequencies

//     for (int i = 0; i < len1; i++) {
//         count[str1[i]]++;
//         count[str2[i]]--;
//     }

//     for (int i = 0; i < 256; i++) {
//         if (count[i] != 0) {
//             printf("No\n");
//             return 0;
//         }
//     }

//     printf("Yes\n");
//     return 0;
// }

int main(){
    char str1[100], str2[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int len1 = strlen(str1) -1;
    int len2 = strlen(str2) -1;

    if(len1!=len2){
        printf("No\n");
        return 0;
    }

    int count[256] = {0};
    for(int i=0; i<len1; i++){
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for(int i=0; i<256; i++){
        if(count[i]!=0){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
     return 0;
}