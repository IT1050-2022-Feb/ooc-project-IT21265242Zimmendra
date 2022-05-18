#include <iostream>
#include <cstring>
#include "Cart.h"
using namespace std;

 Cart::Cart()
{
   strcpy(customerID, "");
   nItemsInCart = 0;
   maxItemsInCart = 6;
   totPrice = 0;
}

Cart::Cart(char cid[],int nItems)
{
   strcpy(customerID, cid);
   nItemsInCart = nItems;
   maxItemsInCart = 6;
   totPrice = 0;
}

double Cart::getTotPrice()
{
   return totPrice;
}

Cart::~Cart()
{
  cout << "Cart destroyed " << endl;
}