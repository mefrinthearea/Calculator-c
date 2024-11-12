#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;


    //first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    //operator
    printf("Enter an operato (+, -, *, /): ");
    scanf(" %c", &operator);

    //second number
    printf("Enter the first number: ");
    scanf("%lf", &num2);

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
            printf("ERROR");
        } 
        break;

        default:
        printf("Error: Invalid operator.\n");
        return 1;
    }

    printf("Result: %.3f\n", result);
    return 0;
}
