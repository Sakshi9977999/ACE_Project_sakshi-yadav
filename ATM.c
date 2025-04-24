#include <studio.h>
int main() {
    float balance = 5000.0;
    int choice;
    float amount;

    while (1) {
        printf("\n*** ATM Menu ***\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: ₹%.3f\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ₹");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Enter a valid amount.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    balance -= amount;
                    printf("₹%.2f withdrawn successfully.\n", amount);
                }
                break;
            case 3:
                printf("Enter amount to deposit: ₹");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Enter a valid amount.\n");
                } else {
                    balance += amount;
                    printf("₹%.3f deposited successfully.\n", amount);
                }
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                return 0;
            default:
                printf("Invalid choice. Please select 1 to 4.\n");
        }
    }

    ret
    urn 0;
}