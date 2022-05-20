#include "Cart.h"

class Payment
{
   private:
     char method[20];
     double price;
     char date[10];

   public:
     Payment();
     Payment(char pMethod[], Cart* c, char pdate[]);
     char* getMethod();
     void setMethod(char* pmethod[]);
     double getPrice();
     void setPrice();
     void setDate(char* pDate);
     char* getDate();
     ~Payment();
  
};