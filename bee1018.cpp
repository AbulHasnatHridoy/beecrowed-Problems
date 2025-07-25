#include <stdio.h>

int main() {
    int amount;
    scanf("%d", &amount);  // Ensure no extra input prompts.

    int notes[] = {100, 50, 20, 10, 5, 2, 1};  // Correct denominations.
    int count[7] = {0};

    for (int i = 0; i < 7; i++) {
        if (amount >= notes[i]) {
            count[i] = amount / notes[i];
            amount %= notes[i];  // Update remaining amount.
        }
    }

    // Print all denominations (even if count is 0).
    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", count[i], notes[i]);
    }

    return 0;
}