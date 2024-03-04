#include "withdrawal.h"

Withdrawal::Withdrawal(double amount)
{
    m_Type = "Withdrawal";
    m_Amount = amount;
    m_Percentage = 0.02;
}
double Withdrawal::computeCost(Transaction& transaction)
{
    transaction.setCost(m_Amount*m_Percentage);

    return (m_Amount*m_Percentage);
}
QString Withdrawal::toString()
{
    QString sentence;
    double wCost = m_Amount*m_Percentage;
    QString seg1 = "The amount withdrawn is R";
    QString seg2 = QString::number(m_Amount);
    QString seg3 = ". The fee for the withdrawal is R";
    QString seg4 = QString::number(wCost);
    QString seg5 = ". The withdrawal was made at:";
    QString seg6 = m_DateTime.toString();

    sentence = seg1 + seg2 + seg3 + seg4 + seg5 + seg6;

    return sentence;
}
