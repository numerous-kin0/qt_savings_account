#include "savingsaccount.h"

SavingsAccount::SavingsAccount(QString name, QString num)
{
    m_CustomerName = name;
    m_AccountNumber = num;
}

void SavingsAccount::addTransaction(Transaction& t)
{
    m_TransactionList.append(t);
}

double SavingsAccount::totalTransactionCost()
{
    double totalCost = 0;
    double cost = 0;

    for(const Transaction& transaction : m_TransactionList)
    {
        cost = transaction.getCost();
        totalCost = totalCost + cost;
    }

    return totalCost;
}

QList<Transaction> SavingsAccount::transactionOnAdate(QDate date)
{
    QList<Transaction> transactionsOnDate;

    for(const Transaction& transaction : m_TransactionList)
    {
        QDateTime dateTime = transaction.getDateTime();
        QDate date1 = dateTime.date();
        if (date1 == date)
        {
            transactionsOnDate.append(transaction);
        }
    }

    return transactionsOnDate;
}
QString SavingsAccount::toString()
{
    QString seg1 = "Name and surname of account holder: ";
    QString seg2 = m_CustomerName;
    QString seg3 = ". The account number of savings account: ";
    QString seg4 = m_AccountNumber;

    QString sentence = seg1 + seg2 + seg3 + seg4;

    return sentence;
}
QString SavingsAccount::frequentTransactionType() const
{
    QMap<QString, int> transactionCounts;

    transactionCounts["Withdrawal"] = 0;
    transactionCounts["Deposit"] = 0;
    transactionCounts["Balance Enquiry"] = 0;

    for(const Transaction& transaction : m_TransactionList)
    {
        QString type = transaction.getType();
        if (type == "Withdrawal" || type == "Deposit" || type == "Balance Enquiry")
        {
            transactionCounts[type]++;
        }
    }

    QString mostFrequentTransaction;
    int maxCount = 0;
    for (const QString& type : transactionCounts.keys())
    {
        int count = transactionCounts[type];
        if (count > maxCount)
        {
            maxCount = count;
            mostFrequentTransaction = type;
        }
    }

    return mostFrequentTransaction;
}




