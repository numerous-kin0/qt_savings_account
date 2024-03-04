Transaction and Savings Account System
This project implements a simple system for handling financial transactions and managing savings accounts. It involves three main classes: Transaction, Deposit, Withdrawal, and SavingsAccount.

Transaction Class
Attributes:
m_Type: Represents the type of transaction (deposit, withdrawal, balance enquiry).
m_DateTime: Stores the date and time of the transaction.
Methods:
getType(): Returns the type of the transaction.
getDateTime(): Returns the date and time of the transaction.
toString(): Returns a string representation of the transaction.
computeCost(): Pure virtual function to calculate the cost of each transaction.
Deposit Class
Inherits from Transaction.

Attributes:

m_Fee: Represents the fee charged for a deposit.
Methods:

computeCost(): Returns the value of m_Fee.
Withdrawal Class
Inherits from Transaction.

Attributes:

m_PercentageCost: Represents the percentage cost of a withdrawal.
Methods:

computeCost(): Calculates the cost based on the percentage of the amount withdrawn.
SavingsAccount Class
Attributes:

m_CustomerName: Represents the customer's name.
m_AccountNumber: Stores the account number.
m_TransactionList: A list of transactions associated with the account.
Methods:

addTransaction(transaction): Adds a Transaction object to the account.
totalTransactionCost(): Returns the combined cost of all transactions.
frequentTransactionType(): Returns the type of transaction done most frequently.
transactionsOnADate(date): Returns a list of transactions carried out on a given date.
toString(): Returns a string representation of the SavingsAccount.
Sample Program
A short program is included to test the member functions of the SavingsAccount class, adding at least 6 transactions (2 of each type) to the account.
