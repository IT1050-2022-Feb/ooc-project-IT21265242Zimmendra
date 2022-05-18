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
  NoOfItems = 0;
  strcpy(Customer_ID,"");
}

Order::Order(char OID[], double Oamt, char ODate[], int NoItems, char CusID[])
{
  strcpy(Order_ID,OID);
  Order_Amount = Oamt;
  strcpy(Order_Date,ODate);
  NoOfItems = NoItems;
  strcpy(Customer_ID,CusID);
}

void Order:: setOrderID(char OID[])
{
  strcpy(Order_ID, OID);
}

char Order:: getOrderID()
{
  for(i=0; i<5; i++)
    {
      cout<<Order_ID[i];
    }
  return 0;
}

void Order:: setOrder_Amount(double Oamt)
{
  Order_Amount = Oamt;
}

double Order:: getOrder_Amount()
{
  return Order_Amount;
}

void Order:: setODate(char ODate[])
{
  strcpy(Order_Date, ODate);
}

char Order:: getODate()
{
  for(i=0; i<5; i++)
    {
      cout<<Order_Date[i];
    }
  return 0;
}

void Order:: setNoOfItems(int NoItems)
{
  NoOfItems = NoItems;
}

int Order:: getNoOfItems()
{
  return NoOfItems;
}

void Order:: setCustomer_ID(char CusID[])
{
  strcpy(Customer_ID,CusID);
}

char Order:: getCustomer_ID()
{
  for(i=0; i<5; i++)
    {
      cout<<Customer_ID[i];
    }
  return 0;
}

Order::~Order()
{
  
}