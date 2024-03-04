#include <QCoreApplication>
#include "transaction.h"
#include "deposit.h"
#include "withdrawal.h"
#include "balanceenquiry.h"
#include "savingsaccount.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Transaction 1 : Deposit
    QDateTime dateTime1;
    QDate date1(2019,8,17);
    QTime time1(13,14,9);

    dateTime1.setDate(date1);
    dateTime1.setTime(time1);

    Transaction transaction1("Deposit",dateTime1);
    Deposit deposit1(150000.00); //2.5

    deposit1.computeCost(transaction1);
    //end of first transaction
    //Transaction 2 : Deposit
    QDateTime dateTime2;
    QDate date2(2019,8,19);
    QTime time2(15,14,9);

    dateTime2.setDate(date2);
    dateTime2.setTime(time2);

    Transaction transaction2("Deposit",dateTime2);
    Deposit deposit2(60000.00); //2.5

    deposit2.computeCost(transaction2);
    //end of the second transaction
    //Transaction 3 : Withdrawal
    QDateTime dateTime3;
    QDate date3(2019,8,22);
    QTime time3(9,11,19);

    dateTime3.setDate(date3);
    dateTime3.setTime(time3);

    Transaction transaction3("Withdrawal",dateTime3);
    Withdrawal withdrawal1(4560.00); //91.2

    withdrawal1.computeCost(transaction3);
    //end of the third transaction
    //Transaction 4 : Withdrawal
    QDateTime dateTime4;
    QDate date4(2019,8,25);
    QTime time4(13,14,9);

    dateTime4.setDate(date4);
    dateTime4.setTime(time4);

    Transaction transaction4("Withdrawal",dateTime4);
    Withdrawal withdrawal2(3250.00); //65

    withdrawal2.computeCost(transaction4);
    //end of the fourth transaction
    //Transaction 5 : Balance Enquiry
    QDateTime dateTime5;
    QDate date5(2019,8,27);
    QTime time5(16,15,9);
    QDate fromDate(2019,8,17);
    QDate toDate(2019,8,19);

    dateTime5.setDate(date5);
    dateTime5.setTime(time5);

    Transaction transaction5("Balance Enquiry",dateTime5);
    BalanceEnquiry balanceEnq1(fromDate,toDate);

    balanceEnq1.computeCost(transaction5);
    //end of the fifth transaction
    //Transaction 6 : BalanceEnquiry
    QDateTime dateTime6;
    QDate date6(2019,8,29);
    QTime time6(19,10,9);
    QDate fromDate1(2019,8,20);
    QDate toDate1(2019,8,22);

    dateTime6.setDate(date6);
    dateTime6.setTime(time6);

    Transaction transaction6("Balance Enquiry",dateTime6);
    BalanceEnquiry balanceEnq2(fromDate1,toDate1);

    balanceEnq2.computeCost(transaction6);
    //end of the sixth transaction

    //Creation of savings account
    SavingsAccount account1("Mabo Giqwa","17153522");

    account1.addTransaction(transaction1);
    qDebug() << "The cost of transaction 1 is: R" << transaction1.getCost();
    account1.addTransaction(transaction2);
    qDebug() << "The cost of transaction 2 is: R" << transaction2.getCost();
    account1.addTransaction(transaction3);
    qDebug() << "The cost of transaction 3 is: R" << transaction3.getCost();
    account1.addTransaction(transaction4);
    qDebug() << "The cost of transaction 4 is: R" << transaction4.getCost();
    account1.addTransaction(transaction5);
    qDebug() << "The cost of transaction 5 is: R" << transaction5.getCost();
    account1.addTransaction(transaction6);
    qDebug() << "The cost of transaction 6 is: R" << transaction6.getCost();

    double totalCost = account1.totalTransactionCost();
    qDebug() << "The total cost is: R" << totalCost;

    QString gTransaction = account1.frequentTransactionType();

    qDebug() << "The most frequent transaction is: " << gTransaction;

    QDate someDate(2019,8,27);

    QList<Transaction> someList = account1.transactionOnAdate(someDate);

    for(const Transaction& transaction : someList)
    {
        qDebug() << transaction.getType();
    }

    qDebug() << account1.toString();

    return a.exec();
}
