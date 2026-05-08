//Write a program to count the occurrences of a specific character within a given string.
//The search must be case-insensitive and implemented using pure ASCII character arithmetic.
#include <stdio.h>

int main() {
    char str[55], target;
    int count = 0;

    // 1. Get inputs safely
    fgets(str, sizeof(str), stdin);
    scanf(" %c", &target);

    // 2. Normalize target to lowercase
    if (target >= 'A' && target <= 'Z') target += 32;

    // 3. Loop through string until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        
        // Normalize current character to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;

        // Increment count if it matches the target
        if (str[i] == target) count++;
    }

    // 4. Print the final count
    printf("%d\n", count);

    return 0;
}
