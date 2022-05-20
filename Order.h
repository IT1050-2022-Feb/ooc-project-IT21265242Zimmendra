#include "customer.h"
class Order
{
private:l
  char Order_ID[5];
  double Order_Amount;
  char Order_Date[8];
  char Customer_ID[5];
  Customer *Cust; //the Customer ID assigned to each order placed by a particular customer

public:
  Order(); //default constructor
  Order(char OID[], double Oamt, char ODate[], Customer *Cust); //overloaded constructor
  void setOrderID(char[]); //setter for Order ID
  char getOrderID(); //getter for Order ID
  void setOrder_Amount(double Oamt); //setter for Order Amount
  double getOrder_Amount(); //getter for Order Amount
  void setODate(char[]); //setter for Order Date
  char getODate(); //getter for Order Date
  ~Order(); //Destructor
};