// Write a C program using nested structures to store employee and income details.

// Create:

// A structure incomeInLPA containing:
// Basic Salary
// HRA
// TA
// DA
// A structure employee containing:
// Employee Name
// Employee ID
// Nested incomeInLPA structure

// Requirements:

// Read employee details and salary components.
// Create a function to calculate 10% bonus on basic salary.
// Calculate:
// Total Annual Income
// Bonus
// Taxable Income = Total Income − Bonus
// Display all calculated values.

#include <stdio.h>

// Define the income structure
struct incomeInLPA {
    int basic_salary;
    int HRA;
    int TA;
    int DA;
};

// Define the employee structure, nesting the income structure
struct employee {
    char name[30];
    int id;
    struct incomeInLPA income;
};

// Function to find 10% of the basic salary
int calculateBonus(int basic) {
    return basic / 10; 
}

int main() {
    struct employee emp;
    
    // Read the employee's name and ID
    scanf("%s %d", emp.name, &emp.id);
    
    // Read the salary details
    scanf("%d %d %d %d", &emp.income.basic_salary, &emp.income.HRA, &emp.income.TA, &emp.income.DA);
    
    // Perform calculations
    int total_income = emp.income.basic_salary + emp.income.HRA + emp.income.TA + emp.income.DA;
    int bonus = calculateBonus(emp.income.basic_salary);
    int taxable_income = total_income - bonus;
    
    // Output the formatted results
    printf("Total Annual Income: %d\n", total_income);
    printf("Bonus: %d\n", bonus);
    printf("Taxable Income: %d\n", taxable_income);
    
    return 0;
}