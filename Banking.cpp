// Encapsulation

#include <iostream>
using namespace std;

// Banking class begin
class Banking
{
  // private access specifier
private:
  /***
   * TODO:
   *  1. declare bank cash pool balance attribute
   *  2. declare a customer account balance attribute
   *
   *  write your code here
   */

  // public access specifier
public:
  /***
   * TODO:
   *  1. use constructor to initialize the attributes declared in private access specifier
   *  2. for the initial value of the bank cash pool balance:
   *      a. you may pick a number (e.g. 10000) and hardcode the initial value inside the constructor
   *      b. you may also pass an argument in the constructor to initalize the value
   *  3. initialize the value of a customer account balance to 0
   *
   */
  Banking()
  {
    /** TODO: write your code here */
  }

  /***
   * TODO: (setter method)
   *  1. create a class method for opening a customer account
   *  2. this method will take one (1) argument that is the cash amount the customer enters to open a new account
   *  3. then, it will add the amount to the private attributes of customer account balance and bank cash pool balance
   *  4. reture a boolean value - true
   *
   */
  bool openMyAccount(int amount)
  {
    /** TODO: write your code here */
  }

  /***
   * TODO: (getter method)
   *  1. create a class method for getting a customer account balance
   *  2. no argument in this method
   *  3. return an integer value of the customer account balance that is declared in the private access specifier
   *
   */
  int getMyBalance()
  {
    /** TODO: write your code here */
  }

  /***
   * TODO: (setter method)
   *  1. create a class method for withdrawing cash from a customer account
   *  2. this method will take one (1) argument that is the cash amount the customer enters to withdraw
   *  3. it should check if the customer account balance has enough cash to withdraw
   *  4. if enough cash, substract the amount from the private attributes of customer account balance and bank cash pool balance
   *  5. return true if the requested withdrawn amount is less than or equal to the customer account balance
   *  6. return false if the requested withdrawn amount is more than the customer account balance
   *
   */
  bool withdrawMyCash(int amount)
  {
    /** TODO: write your code here */
  }

  /***
   * TODO: (setter method)
   *  1. create a class method for depositing cash to a custome account
   *  2. this method will take one (1) argument that is the cash amount the customer enters to deposit
   *  3. then, it will add the amount to the private attributes of the customer account balance and bank cash pool balance
   *  4. reture a boolean value - true
   *  5. this method is similar to the openMyAccount() method above
   *
   */

  bool depositMyCash(int amount)
  {
    /** TODO: write your code here */
  }
};
// Banking class end

int main()
{
  /*******************************
   *  Banking System Use Case *
   * *****************************
   *
   * Assumptions & Constraints:
   * --------------------------
   *  1. your banking system only accept integer values, it will provide transaction options to perform and an option to exit the system
   *  2. the transaction options: open account, deposit cash and withdraw cash
   *  3. for simplicity, your banking system serves 1 customer at a time
   *
   */

  /***
   * TODO:
   *  1. declare a variable for cash amount that a customer will provide to perform a transaction
   *  2. declare a variable for transaction options that a customer will select to perform a transaction or exit the system
   *
   *  write your code here
   */

  /***
   * TODO: create an object of Banking class
   *
   *  write your code here
   */

  /***
   * TODO:
   *  1. prompt a customer to enter an amount to open an account (use cout and cin)
   *  2. you can decide a minimum amount for opening an account
   *  3. check for the amount if it meets the minimum requirment
   *  4. if the amount doesn't meet the minimun requirement, exit the system
   *  5. if the amount meet the minimum requirement, display a success account opening message and the account balance
   *  6. (optional) you may allow a customer to fail a few times before exiting the system
   *  7. before exiting the system, prompt the customer to contact customer services for assistance
   *
   * TODO: write your code here
   *  cout prompt for amount
   *  cin user input
   */
  if ()
  {
    /** TODO: write your code here */
  }
  else
  {
    /** TODO: write your code here */
  }

  /***
   * TODO:
   *  1. create a loop that will cycle until a customer select exit
   *  2. inside the loop, provide transaction options to deposit, withdraw and check balance, and an option to exit the system
   *  3. for deposit and withdraw cash options, prompt a customer to enter an amount to execute the transaction
   *  4. for withdraw option, if return value is false, display a fail to withdraw message and the account balance
   *  5. after executing each transaction option, display an available balance
   *  6. display a thank you message when a customer is exiting the system
   *
   */
  do
  {

    /** TODO: write your code here
     *   cout options to select
     *   cin user input
     *   if deposit do something
     *   else if withdraw do other things
     *   else if check balance do something else
     *   else if exit say thank you and goodbye
     *
     */

  } while ();

  return 0;
}