#include <stdio.h>

int main() {
    int x, y; // x for rent a cooler, y for purchase cooler
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y); // Corrected format specifier

    if (x < y) {
        int max_months = (y - 1) / x; // Calculate the maximum months
        printf("%d\n", max_months);
    } else {
        printf("0\n"); // If renting is not cheaper, print 0
    }

    return 0;
}
