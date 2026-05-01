// Palindrome Check: A puzzle enthusiast wants to know if a word is a palindrome (reads the
// same forward and backward).
// • Test Case 1: "radar" → Yes
// • Test Case 2: "coding" → No
// • Test Case 3: "121" → Yes
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int start = 0;
    int isPalindrome = 1;
    scanf("%s", str);
    int end = strlen(str)-1;
    while(start<end){
        if (str[start] != str[end]){
        isPalindrome = 0;
    }
        start++;
        end--;
    }
    if (isPalindrome) printf("Palindrome\n");
    else printf("Not a palindrome\n");
    return 0;
}