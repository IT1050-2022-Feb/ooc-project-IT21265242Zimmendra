#include "Payment.h"
#include <iostream>
#include <cstring>
using namespace std;

Payment::Payment()
{
  strcpy(method,  "");
  price = 0;
  strcpy(date, "");
}
     
Payment::Payment(char pMethod[], Cart* c, char pdate[])
{
   strcpy(method, pMethod);
   price = c -> getTotPrice();
   strcpy(date, pdate);

}

Payment::~Payment()
{
  cout << "Payment Portal destroyed " << endl;
}