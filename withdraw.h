#ifndef WITHDRAW_H
#define WITHDRAW_H

#include "transaction.h"

class Withdraw : public Transaction
{
public:
    Withdrawal(double amount);
    QString toString();
    double computeCost();
private:
    double m_Amount;
    double m_Percentage;
};

#endif // WITHDRAW_H
