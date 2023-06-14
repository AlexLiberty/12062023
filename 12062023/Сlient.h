#ifndef CLIENT_H
#define CLIENT_H
#include <string>

class Client
{
private:
    int id;
    double balance;

public:
    Client(int clientId, double initialBalance);
    int getId() const;
    double getBalance() const;
    void deposit(double amount);
    void withdraw(double amount);
};

#endif