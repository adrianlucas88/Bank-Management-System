# Bank-Management-System

#### User Authentication:

- User login
- User registration

#### Account Management:

- Create account
- View account details

#### Transaction Processing:

- Deposit
- Withdrawal

### System Architecture

A basic layered architecture:

#### Presentation Layer:

Handles user inputs via console.

#### Business Logic Layer:

Core functionalities (e.g., login, account creation, deposit).

#### Data Access Layer:

Simple file-based data storage.

### Coding Standards and Tools

- **Version Control**: Use Git for managing code.
- **Code Review**: Simple peer reviews for learning.
- **Documentation**: Basic comments in code and a README file.

#### Example Code Snippet:

**main.c**

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

````

**auth/login.c**

```c
#include "auth.h"
#include <stdio.h>

void login() {
    // Simple placeholder for login logic
    printf("User login\n");
}
````

**auth/register.c**

```c
#include "auth.h"
#include <stdio.h>

void register_user() {
    // Simple placeholder for registration logic
    printf("User registration\n");
}
```

**auth/auth.h**

```c
#ifndef AUTH_H
#define AUTH_H

void login();
void register_user();

#endif // AUTH_H
```

### Conclusion

This simplified structure provides a clear, manageable way to develop a beginner-friendly bank management system in C while following Agile principles. The focus is on learning and collaboration, with a basic but functional project structure.
