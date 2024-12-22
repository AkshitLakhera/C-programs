#include <stdio.h>

int main()
{
    float num1, num2, result;
    char operator;
    int choice;

    // Display the calculator menu
    printf("Calculator Menu:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exit\n");

    // Ask for the initial number
    printf("Enter the first number: ");
    scanf("%f", &num1);

    do
    {
        // Ask for the operator and second number
        printf("Enter operator: ");
        scanf(" %c", &operator);
        printf("Enter second number: ");
        scanf("%f", &num2);
        switch (operator)
        {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator. Please use +, -, *, or /.\n");
            continue;
        }
        num1 = result;
        printf("Do you want to continue with the result? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);

    } while (choice != 0);

    return 0;
}
