#include <stdio.h>

// Function to take user input
float getInput() {
    float x;
    printf("Enter value of x (x > 0): ");
    scanf("%f", &x);
    
    while (x <= 0) {
        printf("Invalid input. Enter x > 0: ");
        scanf("%f", &x);
    }
    
    return x;
}

// Function to calculate power (base^exp)
float power(float base, int exp) {
    float result = 1;
    int i;
    
    for (i = 0; i < exp; i++) {
        result = result * base;
    }
    
    return result;
}

// Function to calculate log(x) using Taylor series
float calculateLog(float x, int terms) {
    float t, sum = 0;
    int i, n;
    
    t = (x - 1) / (x + 1);
    
    for (i = 1; i <= terms; i++) {
        n = 2 * i - 1;  // Odd numbers: 1, 3, 5, ...
        sum = sum + power(t, n) / n;
    }
    
    return 2 * sum;
}

// Main function
int main() {
    float x, result;
    int terms;
    
    x = getInput();
    
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    
    result = calculateLog(x, terms);
    
    printf("log(%f) = %f\n", x, result);
    
    return 0;
}
