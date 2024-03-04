#ifndef BALANCEENQUIRY_H
#define BALANCEENQUIRY_H

#include "transaction.h"

class BalanceEnquiry : public Transaction
{
public:
    BalanceEnquiry(QDate fDate, QDate tDate);
    QString toString();
    double computeCost(Transaction& transaction);
private:
    QDate m_FromDate;
    QDate m_toDate;
};

#endif // BALANCEENQUIRY_H
