#include <iostream>
#include <string>

struct BankAccount {
    int id;
    std::string name;
    double amount;
};

void ChangeAmount(BankAccount *account, double new_amount)
{
    (*account).amount = new_amount;
}

int main()
{
    setlocale(LC_ALL, "Ru");
    std::system("chcp 1251");
    BankAccount b1;
    int new_balance;
        std::cout << "¬ведите номер счета:" << " ";
        std::cin >> b1.id;
        std::cout << "¬ведите им€ владельца:" << " ";
        std::cin >> b1.name;
        std::cout << "¬ведите баланс:" << " ";
        std::cin >> b1.amount;
        std::cout << "¬ведите новый баланс:" << " ";
        std::cin >> new_balance;
        ChangeAmount(&b1, new_balance);
        std::cout << "¬аш счЄт: " << b1.name << ", " << b1.id << ", " << b1.amount << std::endl;
}


