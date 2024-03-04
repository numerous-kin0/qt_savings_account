#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include "transaction.h"

class Withdrawal : public Transaction
{
public:
    Withdrawal(double amount);
    QString toString();
    double computeCost(Transaction& transaction);
private:
    double m_Amount;
    double m_Percentage;
};

#endif // WITHDRAWAL_H
