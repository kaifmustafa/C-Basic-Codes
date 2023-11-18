#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Input
    printf("Enter an expression (e.g., 2 + 3): ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    // Perform the calculation
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    // Output
    printf("Result: %lf %c %lf = %lf\n", num1, operator, num2, result);

    return 0;
}