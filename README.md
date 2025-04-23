Project Description:
This is a basic ATM system written in the C programming language. It lets users do simple banking tasks like checking their balance, depositing money, or withdrawing money. The program is interactive, which means you can perform multiple actions until you choose to exit.
Features:
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit the Program
5. Use the Menu
Once the program starts:
It shows you a menu with 4 options.
Enter the number for the action you want to perform.
For deposits or withdrawals, enter the amount when asked.
You can do as many actions as you like until you select "Exit".
#include <stdio.h>  

int main() {
    float balance = 5000.0;  // Initial account balance
    int choice;              // To store user's menu choice
    float amount;            // To store amount for transactions

    while (1) {  // Loop runs until the user chooses to exit
        // Display ATM menu
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);  // Take user input

        // Process user choice
        switch (choice) {
            case 1:
                // Display current balance
                printf("Your current balance is: ₹%.2f\n", balance);
                break;

            case 2:
                // Handle withdrawal
                printf("Enter amount to withdraw: ₹");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Please enter a valid amount.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    balance -= amount;
                    printf("₹%.2f withdrawn successfully.\n", amount);
                }
                break;

            case 3:
                // deposit 
                
                printf("Enter amount to deposit: ₹");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Please enter a valid amount.\n");
                } else {
                    balance += amount;
                    printf("₹%.2f deposited successfully.\n", amount);
                }
                break;

            case 4:
                // Exit the program
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;

            default:
                // Handle invalid input
                printf("Invalid choice. Please select an option between 1 and 4.\n");
        }
    }

    return 0;
}
