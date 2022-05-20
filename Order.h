#include "customer.h"
class Order
{
private:l
  char Order_ID[5];
  double Order_Amount;
  char Order_Date[8];
  char Customer_ID[5];
  Customer *Cust;

public:
  Order();
  Order(char OID[], double Oamt, char ODate[], Customer *Cust);
  void setOrderID(char[]);
  char getOrderID();
  void setOrder_Amount(double Oamt);
  double getOrder_Amount();
  void setODate(char[]);
  char getODate();
  ~Order();
};