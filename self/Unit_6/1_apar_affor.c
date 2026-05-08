// ### Problem: Apartment Affordability Checker

// **Objective:** Write a C program using a structure named `ApartmentInfo` to determine if an apartment is 
//affordable based on its base rent and daily commute cost.

// **Logic & Constraints:**
// * **Structure:** `ApartmentInfo` containing two floats: `rent` and `distance`.
// * **Commute Rate:** Constant at `20.5` per mile.
// * **Budget Limit:** Maximum affordability threshold is constant at `2000.0`.
// * **Calculation:** `Total Cost = rent + (distance * 20.5)`.

// **Input:**
// Two space-separated or newline-separated float values:
// 1. `rent`
// 2. `distance`

// **Output:**
// * Print `"Affordable."` if the Total Cost is $\le$ 2000.0.
// * Print `"Not affordable."` if the Total Cost is $>$ 2000.0.
// *(Note: Output must include the trailing period).*


#include <stdio.h>

// Define the structure as requested
struct ApartmentInfo {
    float rent;
    float distance;
};

int main() {
    // Initialize the structure
    struct ApartmentInfo apt;
    
    // Define the constants given in the problem
    const float COST_PER_MILE = 20.5;
    const float THRESHOLD = 2000.0;
    
    // Read the inputs (f and f1)
    scanf("%f", &apt.rent);
    scanf("%f", &apt.distance);
    
    // Calculate the commute expense and the overall total cost
    float commute_expense = apt.distance * COST_PER_MILE;
    float total_cost = apt.rent + commute_expense;
    
    // Assess affordability and print the exact required output
    if (total_cost <= THRESHOLD) {
        printf("Affordable.\n");
    } else {
        printf("Not affordable.\n");
    }
    
    return 0;
}