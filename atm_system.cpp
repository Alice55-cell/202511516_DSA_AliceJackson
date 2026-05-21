#include <iostream>
#include <vector>
#include <string>

int main() {
    int defaultPIN = 1235;
    int maxAttempts = 3;
    int userPIN;
    double balance = 0.0;
    std::vector<std::string> transactions;
    int choice;

    std::cout << "\t\t=====================" << std::endl;
    std::cout << "\t\t     ATM SYSTEM      " << std::endl;
    std::cout << "\t\t=====================" << std::endl;

    do {
        std::cout << "\t\t Enter your pin____ ";
        std::cin >> userPIN;
        
        maxAttempts--;

        if (userPIN == defaultPIN) {

            do {
                std::cout << "\t\t1. Check balance" << std::endl;
                std::cout << "\t\t2. Deposit " << std::endl;
                std::cout << "\t\t3. Widthdraw" << std::endl;
                std::cout << "\t\t4. View transactions" << std::endl;
                std::cout << "\t\t5. Exit" << std::endl;
                std::cout << "\t\t Enter your choice_____ ";
                std::cin >> choice;

                if (choice == 1) {
                    std::cout << "Your balance is: " << balance << " Frw" << std::endl;
                }
                else if (choice == 2) {
                    double amount;
                    std::cout << "Enter an amount: ";
                    std::cin >> amount;
                    balance += amount;
                    transactions.push_back("Deposit of " + std::to_string((int)amount) + " Frw");
                    std::cout << "You made a deposit of " << amount << " Frw successfully" << std::endl;
                }
                else if (choice == 3) {
                    double amount;
                    std::cout << "Enter an amount: ";
                    std::cin >> amount;
                    if (amount <= balance) {
                        balance -= amount;
                        transactions.push_back("Withdrawal of " + std::to_string((int)amount) + " Frw");
                        std::cout << "You withdrew " << amount << " Frw successfully" << std::endl;
                    }
                    else {
                        std::cout << "Insufficient funds!" << std::endl;
                    }
                }
                else if (choice == 4) {
                    std::cout << "=== Transaction History ===" << std::endl;
                    if (transactions.empty()) {
                        std::cout << "No transactions yet." << std::endl;
                    }
                    else {
                        for (int i = 0; i < transactions.size(); i++) {
                            std::cout << i + 1 << ". " << transactions[i] << std::endl;
                        }
                    }
                }

            } while (choice != 5);

        }
        else {
            std::cout << "Wrong PIN! Try again." << std::endl;
        }

    } while (userPIN != defaultPIN);

    std::cout << "Thank you for using our ATM!" << std::endl;

    return 0;
}
