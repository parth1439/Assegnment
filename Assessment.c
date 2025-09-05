#include <stdio.h>

// Function declarations
void add();
void subtract();
void multiply();
void divide();

int main() {
    int choice;
    char ch;

    do {
        // Display Menu
        printf("\n===== Calculator Menu =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Invalid choice\n");
        printf("===========================\n");

        // Take user choice
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Perform operation based on choice
        switch(choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply(); rnyetr naa my nanem is parth 
                break;
            case 4:
                divide();
                break;
            case 5:
                printf("\nInvalid choice !!!\n");
                break;
            default:
                printf("\nInvalid choice! Please select between 1-5.\n");
        }
    } while(choice != 5);
}
// Function Definitions
void add() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d + %d = %d\n", a, b, a+b);
}

void subtract() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d - %d = %d\n", a, b, a-b);
}

void multiply() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d * %d = %d\n", a, b, a*b);
}

void divide() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(b != 0)
        printf("Result: %d / %d = %d\n", a, b, a/b);
    else
        printf("Error! Division by zero is not allowed.\n");
}
