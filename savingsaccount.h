#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "transaction.h"
#include <QList>

class SavingsAccount
{
public:
    SavingsAccount(QString name, QString num);
    void addTransaction(Transaction& t);
    double totalTransactionCost();
    QString frequentTransactionType() const;
    QList<Transaction> transactionOnAdate(QDate date);
    QString toString();
private:
    QString m_CustomerName;
    QString m_AccountNumber;
    QList<Transaction> m_TransactionList;
};

#endif // SAVINGSACCOUNT_H
