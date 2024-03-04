#include "transaction.h"
#include <iostream>
using namespace std;


Transaction::Transaction()
{
    m_Type = "";
    m_DateTime = m_DateTime.currentDateTime();
}
Transaction::Transaction(QString type, QDateTime dateTime)
{
    m_Type = type;
    m_DateTime = dateTime;
}
QString Transaction::getType() const
{
    return m_Type;
}
QDateTime Transaction::getDateTime() const
{
    return m_DateTime;
}

double Transaction::getCost() const
{
    return cost;
}

void Transaction::setCost(double val)
{
    cost = val;
}
double Transaction::computeCost()
{
    return 0;
}
QString Transaction::toString()
{
    QString statement1 = "The transaction was a ";
    QString statement2 = " at ";
    QString statement3 = m_DateTime.toString();

    QString sentence = statement1 + m_Type + statement2 + statement3;

    return sentence;
}
