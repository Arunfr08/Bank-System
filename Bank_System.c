#include <stdio.h>

// Function to clear leftover input
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Function to check money balance
void checkBalance(float balance) {
    printf("Your current balance is : Rs.%.2f\n", balance);
}

// Function to deposit money
float deposit() {
    float amount;
    printf("Enter amount to deposit : ");

    if (scanf("%f", &amount) != 1) {
        printf("Invalid input! Please enter a number.\n");
        clearBuffer();
        return 0.0f;
    }
    clearBuffer();   

    if (amount <= 0) {
        printf("Invalid amount!!\n");
        return 0.0f;
    }

    printf("Successfully Deposited Rs.%.2f\n", amount);
    return amount;
}

// Function to withdraw money
float withdraw(float balance) {
    float amount;
    printf("Enter withdraw amount : ");

    if (scanf("%f", &amount) != 1) {
        printf("Invalid input! Please enter a number.\n");
        clearBuffer();
        return 0.0f;
    }
    clearBuffer();

    if (amount <= 0) {
        printf("Invalid amount!!\n");
        return 0.0f;
    }
    if (amount > balance) {
        printf("Insufficient funds. Current balance is Rs.%.2f\n", balance);
        return 0.0f;
    }

    printf("Successfully withdrew Rs.%.2f\n", amount);
    return amount;
}

// Main Function
int main() {
    int choice = 0;
    float balance = 0.0f;

    printf("*** Welcome to Bank ***\n");

    do {
        printf("\nChoose one of the options below =>\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your Choice : ");

        int result = scanf("%d", &choice);

        if (result == EOF) {
            printf("\nInput ended. Exiting.\n");
            break;
        }
        if (result != 1) {
            printf("Invalid input! Please enter a number.\n");
            clearBuffer();
            choice = 0;
            continue;          
        }
        clearBuffer();

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("*** Thank You for using the Bank Service ***\n");
                break;
            default:
                printf("Please enter a choice between 1 and 4!\n");
        }

    } while (choice != 4);

    return 0;
}