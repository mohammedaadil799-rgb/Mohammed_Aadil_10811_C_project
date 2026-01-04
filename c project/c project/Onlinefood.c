#include <stdio.h>

// Function to calculate total bill
float calculateTotal(float prices[], int quantities[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i] * quantities[i];
    }
    return total;
}

int main() {
    int i;
    int numItems = 5;

    // Step 1: Store prices in 1D array
    char menuItems[5][20] = {
        "Burger",
        "Pizza",
        "Sandwich",
        "French Fries",
        "Cold Drink"
    };

    float prices[5] = {120.0, 250.0, 100.0, 80.0, 40.0};
    int quantities[5];

    // Step 2: Display menu
    printf("------ Online Food Menu ------\n");
    for (i = 0; i < numItems; i++) {
        printf("%d. %s - ₹%.2f\n", i + 1, menuItems[i], prices[i]);
    }

    // Step 3 & 4: Take quantity input
    printf("\nEnter quantity for each item (0 if not required):\n");
    for (i = 0; i < numItems; i++) {
        printf("%s: ", menuItems[i]);
        scanf("%d", &quantities[i]);
    }

    // Step 5–9: Calculate total bill
    float totalBill = calculateTotal(prices, quantities, numItems);

    // Step 10: Display total bill
    printf("\n-------------------------------\n");
    printf("Total Bill Amount: ₹%.2f\n", totalBill);
    printf("Thank you for your order!\n");
    printf("-------------------------------\n");

    return 0;
}
