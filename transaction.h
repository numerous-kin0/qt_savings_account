#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QString>
#include <QDateTime>

#include <iostream>
using namespace std;

class Transaction
{
public:
    Transaction();
    //Default constructor of Transaction
    //Initializes the private member variables of Transaction
    Transaction(QString type, QDateTime dateTime);
    //Postcondition: Initializes the private member variables
    //of the class
    QString getType() const;
    //Postcondition: Returns the value of m_Type
    QString toString();
    //Postcondition: Returns a QString variable that conveys
    //what transaction took place and the time of the transaction
    QDateTime getDateTime() const;
    //Postcondition: Returns the value of m_DateTime
    double getCost() const;
    void setCost(double val);
    virtual double computeCost();
    //virtual function that returns the value of the variable
    //cost
protected:
    QString m_Type;
    QDateTime m_DateTime;
    double cost;
};

#endif // TRANSACTION_H
