#include <stdio.h>

int main() {
    int choice;
    float a, b;

    do {
        printf("\n===== MENU DRIVEN SCIENTIFIC CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square\n");
        printf("6. Cube\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a * b);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by zero is not allowed\n");
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%f", &a);
                printf("Square = %.2f\n", a * a);
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%f", &a);
                printf("Cube = %.2f\n", a * a * a);
                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 7);

    return 0;
}
