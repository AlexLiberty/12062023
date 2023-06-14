#include "Bank.h"
#include <iostream>

using namespace std;

Bank::Bank() : numClients(0) {}

void Bank::addClient(const Client& client) 
{
    if (numClients < MAX_CLIENTS) 
    {
        clients[numClients] = new Client(client);
        numClients++;
    }
    else 
    {
        cout << "Досягнуто максимальну кількість клієнтів. Неможливо додати клієнта." << endl;
    }
}

void Bank::transferMoney(Client& fromClient, Client& toClient, double amount) 
{
    if (fromClient.getBalance() >= amount) 
    {
        fromClient.withdraw(amount);
        toClient.deposit(amount);
        cout << "Переказ грошей успішно здійснено." << endl;
    }
    else 
    {
        cout << "Переказ грошей не вдалося. Недостатньо коштів на рахунку відправника." <<endl;
    }
}

Bank::~Bank()
{
    for (int i = 0; i < numClients; i++)
    {
        delete clients[i];
    }
}
