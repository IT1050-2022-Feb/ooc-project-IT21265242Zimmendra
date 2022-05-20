#include <iostream>
#include <cstring>
#include "Cart.h"
using namespace std;

// Implementation of Cart default Constructor
 Cart::Cart()
{
   strcpy(customerID, "");
   nItemsInCart = 0;
   maxItemsInCart = 6;
   totPrice = 0;
}

// Implementation of Cart Overloaded Constructor
Cart::Cart(Customer *pc1, int nItems)
{
   strcpy(customerID, pc1 -> getcid());
   nItemsInCart = nItems;
   maxItemsInCart = 6;
   totPrice = 0;
}

// Implementation of getter to get Total Price of all added packages
double Cart::getTotPrice()
{
   return totPrice;
}

// Destructor of Cart Class
Cart::~Cart()
{
  cout << "Cart destroyed " << endl;
  for(int i = 0; i < SIZE; i++){
    delete cartItems[i];
  }
}