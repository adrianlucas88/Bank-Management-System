#include <stdio.h>
#include "auth.h"
#include "account.h"
#include "transaction.h"

int main() {
    // Display a simple menu for the bank management system
    int choice;
    while(1) {
        printf("Welcome to the Bank Management System\n");
        printf("1. Login\n");
        printf("2. Register\n");
        printf("3. Create Account\n");
        printf("4. View Account\n");
        printf("5. Deposit\n");
        printf("6. Withdrawal\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                login();
                break;
            case 2:
                register_user();
                break;
            case 3:
                create_account();
                break;
            case 4:
                view_account();
                break;
            case 5:
                deposit();
                break;
            case 6:
                withdrawal();
                break;
            case 7:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
