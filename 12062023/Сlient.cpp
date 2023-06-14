#include "Сlient.h"
#include <iostream>

using namespace std;

Client::Client(int clientId, double initialBalance) : id(clientId), balance(initialBalance) {}

int Client::getId() const 
{
    return id;
}

double Client::getBalance() const 
{
    return balance;
}

void Client::deposit(double amount) 
{
    balance += amount;
}

void Client::withdraw(double amount) 
{
    if (balance >= amount) {
        balance -= amount;
    }
    else 
    {
        cout << "Недостатньо коштів. Неможливо зняти." <<endl;
    }
}


