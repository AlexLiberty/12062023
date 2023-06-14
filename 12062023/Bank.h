#ifndef BANK_H
#define BANK_H
#include "Ñlient.h"

class Bank 
{
private:
    static const int MAX_CLIENTS = 100;
    Client* clients[MAX_CLIENTS];
    int numClients;

public:
    Bank();
    void addClient(const Client& client);
    void transferMoney(Client& fromClient, Client& toClient, double amount);
    ~Bank();
};

#endif