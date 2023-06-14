#include "Bank.h"
#include "Сlient.h"
#include <iostream>
#include <Windows.h>


using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Bank bank;

    Client client1(1, 1000.0);
    Client client2(2, 500.0);

    bank.addClient(client1);
    bank.addClient(client2);

    cout << "Клієнт 1, баланс: " << client1.getBalance() <<endl;
    cout << "Клієнт 2, баланс: " << client2.getBalance() <<endl;

    bank.transferMoney(client1, client2, 300.0);

    cout << "Клієнт 1, баланс: " << client1.getBalance() <<endl;
    cout << "Клієнт 2, баланс: " << client2.getBalance() <<endl;

    return 0;
}

