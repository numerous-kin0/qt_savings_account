#ifndef DEPOSIT_H
#define DEPOSIT_H

#include "transaction.h"

class Deposit : public Transaction
{
public:
    Deposit(double amount);
    QString toString();
    double computeCost(Transaction& transaction);
private:
    double m_Amount;
    double m_Fee;
};

#endif // DEPOSIT_H
