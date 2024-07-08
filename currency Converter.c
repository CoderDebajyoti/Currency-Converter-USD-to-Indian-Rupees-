#include <stdio.h>

int main() {
    int choice;
    float amount, result;

    // Example exchange rates
    const float USD_to_INR = 83.44;
    const float USD_to_GBP = 0.78;
    const float INR_to_USD = 1.0 / USD_to_INR;
    const float INR_to_GBP = 0.01;
    const float GBP_to_USD = 1.0 / USD_to_GBP;
    const float GBP_to_INR = 106.92;

    printf("Currency Converter\n");
    printf("1. USD to INR\n");
    printf("2. INR to USD\n");
    printf("3. USD to GBP\n");
    printf("4. GBP to USD\n");
    printf("5. INR to GBP\n");
    printf("6. GBP to INR\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 6) {
        printf("Invalid choice. Exiting...\n");
        return 1;
    }

    printf("Enter the amount to convert: ");
    scanf("%f", &amount);
                               // Perform conversion based on choice
    if (choice == 1) {
        result = amount * USD_to_INR;
    } else if (choice == 2) {
        result = amount * INR_to_USD;
    } else if (choice == 3) {
        result = amount * USD_to_GBP;
    } else if (choice == 4) {
        result = amount * GBP_to_USD;
    } else if (choice == 5) {
        result = amount * INR_to_GBP;
    } else if (choice == 6) {
        result = amount * GBP_to_INR;
    }

    // Print the result
    printf("Converted amount: %.2f\n", result);

    return 0;
}
