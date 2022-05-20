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

Cart::Cart(Customer *pc1, int nItems)
{
   strcpy(customerID, pc1 -> getcid());
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