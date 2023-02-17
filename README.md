# Assignment: Encapsulation - Object Oriented Programming

## Objective

In this assignment, you will apply the concept of encapsulation in object oriented programming to create a simple banking system – open account, deposit cash, withdraw cash and check balance.

## Prior Knowledge

## Your Task

1. Use C++.
2. Create a class.
3. Implement **Setter methods** for opening an account, depositing cash and withdrawing cash.
4. Implement a **Getter method** for checking account balance.
5. Use **private** access specifier to prevent cash from being accessed directly outside of the class.
6. **Setter** and **Getter methods** are the only channels to access the private attributes from outside of the class.
7. Implement a banking use case that applies the concept of encapsulation, makes use of the **private** access specifier **Setter** and **Getter methods**. In the banking use case, a customer is prompted to open an account with a minimum amount of cash. Once the account is opened, the customer will be given options to deposit cash, withdraw cash, check balance and exit.
8. For simplicity, you can assume this banking system serves 1 customer at a time.

## Use Case Diagram - Banking System

<img src="img/Banking-use-case.png" alt="banking use case">

**Private** access specifier – members (attributes and methods) cannot be accessed or view from outside of the class.

**Setter method** is used to set or update the value of a variable (members attributes) outside the encapsulating class.

**Getter method** is used to retrieve the value of a variable (members attributes) outside the encapsulating class.

In this use case, a customer can perform four (4) types of transactions on the banking system:

- open account
- deposit cash
- withdraw cash
- check balance

To start, the banking system prompts a customer to enter an amount to open an account. The system should set a minimum amount for opening an account. If the amount doesn't fulfill the requirement, the system will prompt the customer to contact customer services before exiting.

Once successfully opened an account, the customer are provided four (4) options:

- deposit cash
- withdraw cash
- check balance
- exit the system

These options should be cycled until the customer selects "exit the system".

**Note**: open account is a 1-time execution task and not included in the cycle.

As normal banking operations, deposit cash increments the account balance, withdraw cash decrements account balance and check balance retrieves account balance.

Besides each individual customer account balance, the banking system also keeps a congregated balance (cash pool) of all customers accounts. This congregated balance should only be accessed within the banking system, that means no customer or others outside of the bank can reach the congregated balance.

**Note**:

1. In object oriented programming, that means no object created from the banking class can directly access the congregated balance (cash pool) that declared as a **private** class member.
2. No Setter or Getter method should be implemented to access the congregated balance in this banking system because this is a customer use case.

To test the congregated amount (cash pool) is set up correctly, try to access the private cash pool from an object created from the banking class, e.g. myBanking.mCashPool, you will get this similar error message -- image.

## Starter Code

a repository provides basic code structure and inline documentation for you to get started. Banking.cpp includes a class structure and a main outsider of the class for implementing this Banking system use case.
