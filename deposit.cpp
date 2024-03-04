#include "deposit.h"

Deposit::Deposit(double amount)
{
    m_Type = "Deposit";
    m_Amount = amount;
    m_Fee = 2.50;
    cost = m_Fee;
}
double Deposit::computeCost(Transaction& transaction)
{
    transaction.setCost(m_Fee);

    return m_Fee;
}
QString Deposit::toString()
{
    QString sentence;
    QString part = QString::number(m_Amount);
    QString part6 = QString::number(m_Fee);
    QString part1 = "This is a ";
    QString part2 = ". The fee for the deposit is R";
    QString part3 = ". The amount deposited is R";
    QString part4 = ". This was deposited at ";
    QDateTime dateTime = getDateTime();
    QString part5 = dateTime.toString();

    sentence = part1 + m_Type + part2 + part6 + part3 + part + part4 + part5;

    return sentence;
}
