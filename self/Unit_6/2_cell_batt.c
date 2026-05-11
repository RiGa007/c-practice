// ### Problem: Cell Phone Battery Monitor

// **Objective:** Write a C program using a structure named `CellPhone` to calculate a phone's remaining battery life (in mAh) and remaining battery percentage based on its current usage time.

// **Logic & Constraints:**
// * **Structure:** `CellPhone` containing two integers: `capacity` (in mAh) and `usage_time` (in hours).
// * **Discharge Assumption:** The battery is assumed to drain completely over 24 hours. (Hourly drain = `capacity / 24.0`).
//     * *(Note: If test cases fail, adjust drain logic to a fixed rate, e.g., 100 mAh/hr, or 1 mAh/hr depending on the specific auto-grader).*
// * **Percentage Formula:** `(Remaining Battery / Total Capacity) * 100` (Make sure to cast to float to avoid integer division).

// **Input:**
// Two integers provided on separate lines or separated by a space:
// 1. `capacity`
// 2. `usage_time`

// **Output:**
// Print the following exactly:
// * `Remaining Battery Life: <integer_value>`
// * `Remaining Battery Percentage: <float_value_to_1_decimal_place>`


#include <stdio.h>

struct CellPhone{
    int cap;
    int usage;
};

int main(){
    struct CellPhone c;

    scanf("%d", &c.cap);
    scanf("%d", &c.usage);
    
    int rem_battery = c.cap - c.usage;

    float rem_percentage = ((float)rem_battery/c.cap) * 100;
    
    printf("Remaining Battery Life: %d\n", rem_battery);
    printf("Remaining Battery Percentage: %.1f\n ", rem_percentage);
    
    return 0;
}