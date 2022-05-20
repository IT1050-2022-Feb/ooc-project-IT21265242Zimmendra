#include "Payment.h"
#include <iostream>
#include <cstring>
using namespace std;


// Implementation of payment default constructor
Payment::Payment()
{
  strcpy(method,  "");
  price = 0;
  strcpy(date, "");
}

// Implementation of payment overloaded constructor
Payment::Payment(char pMethod[], Cart* c, char pdate[])
{
   strcpy(method, pMethod);
   price = c -> getTotPrice();
   strcpy(date, pdate);

}

// Implementation of payment destructor
Payment::~Payment()
{
  cout << "Payment Portal destroyed " << endl;
}