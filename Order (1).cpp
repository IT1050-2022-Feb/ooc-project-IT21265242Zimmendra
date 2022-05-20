#include "Order.h"
#include <iostream>
#include <cstring>

using namespace std;

int i;

Order::Order()
{
  strcpy(Order_ID,"");
  Order_Amount = 0;
  strcpy(Order_Date,"");
  strcpy(Customer_ID,"");
}

Order::Order(char OID[], double Oamt, char ODate[], Customer *Cus)
{
  strcpy(Order_ID,OID);
  Order_Amount = Oamt;
  strcpy(Order_Date,ODate);
  strcpy(Customer_ID, Cus->getcid());
}

Order::~Order()
{
  
}