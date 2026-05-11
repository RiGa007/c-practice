// ### Problem: Weather Condition Analyzer

// **Objective:** Write a C program using a structure named `WeatherInfo` to evaluate and display the current weather condition based on temperature, humidity, and wind speed.

// **Logic & Constraints:**
// * **Structure:** `WeatherInfo` containing three floats: `temperature`, `humidity`, and `windSpeed`.
// * **Temperature Conditions:**
//     * `< 0.0`: "Freezing"
//     * `>= 0.0` and `< 10.0`: "Cold"
//     * `>= 10.0` and `< 20.0`: "Cool"
//     * `>= 20.0` and `< 30.0`: "Moderate"
//     * `>= 30.0`: "Hot"
// * **Additional Conditions:**
//     * If `humidity > 70.0`, flag as "High Humidity".
//     * If `windSpeed > 10.0`, flag as "Strong Wind".

// **Input:**
// Three float values provided in the following order:
// 1. `temperature`
// 2. `humidity`
// 3. `windSpeed`

// **Output:**
// * Print the base condition exactly as: `"Weather Condition: <Condition>"` (e.g., `"Weather Condition: Cold"`). *(Note: Do not include a period at the end).*
// * If applicable, print `"High Humidity"` on a new line.
// * If applicable, print `"Strong Wind"` on a new line.

#include <stdio.h>

struct WeatherInfo {
    float temperature;
    float humidity;
    float windSpeed;
};

int main() {
    struct WeatherInfo w;
    
    scanf("%f", &w.temperature);
    scanf("%f", &w.humidity);
    scanf("%f", &w.windSpeed);
    
    printf("Weather Condition: ");
    if (w.temperature < 0.0) {
        printf("Freezing\n");
    } else if (w.temperature >= 0.0 && w.temperature < 10.0) {
        printf("Cold\n");
    } else if (w.temperature >= 10.0 && w.temperature < 20.0) {
        printf("Cool\n");
    } else if (w.temperature >= 20.0 && w.temperature < 30.0) {
        printf("Moderate\n");
    } else if (w.temperature >= 30.0) {
        printf("Hot\n");
    }
    
    if (w.humidity > 70.0) {
        printf("High Humidity\n");
    }
    
    if (w.windSpeed > 10.0) {
        printf("Strong Wind\n");
    }
    
    return 0;
}