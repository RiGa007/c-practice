#include <stddef.h>

// Find the largest element in DMA
int largest(const int *p, int n)
{
    if (p == NULL || n <= 0) return 0; // basic safety

    int max = p[0];
    for (int i = 1; i < n; i++) {
        if (p[i] > max) {
            max = p[i];
        }
    }
    return max;
}

// Find sum of elements in DMA
int sum(const int *p, int n)
{
    if (p == NULL || n <= 0) return 0; // basic safety

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += p[i];
    }
    return total;
}

// Reverse elements in DMA
void reverse(int *p, int n)
{
    if (p == NULL || n <= 1) return;

    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = p[start];
        p[start] = p[end];
        p[end] = temp;

        start++;
        end--;
    }
}