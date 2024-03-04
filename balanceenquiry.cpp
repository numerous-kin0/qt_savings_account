#include "balanceenquiry.h"
#include <QDate>

BalanceEnquiry::BalanceEnquiry(QDate fDate, QDate tDate)
{
    m_FromDate = fDate;
    m_toDate = tDate;
    m_Type = "Balance Enquiry";
    cost = 0;
}
double BalanceEnquiry::computeCost(Transaction& transaction)
{
    transaction.setCost(0);

    return 0;
}
QString BalanceEnquiry::toString()
{
    double cost;
    QString sentence;

    cost = 0;
    QString part1 = "From: ";
    QString part2 = m_FromDate.toString();
    QString part3 = ". To: ";
    QString part4 = m_toDate.toString();
    QString part5 = ". The fee is R";
    QString part6 = QString::number(cost);

    sentence = part1 + part2 + part3 + part4 + part5 + part6;

    return sentence;
}
