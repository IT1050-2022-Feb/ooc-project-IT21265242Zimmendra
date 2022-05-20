#include "Cart.h"
// Implementation of class Payment
// Payment class has a dependency relationship with the cart class(Payment class is dependant on cart class)
class Payment
{
   private:
     char method[20];          // Stores chosen payment method
     double price;             // Stores price to pay
     char date[10];            // Stores payment date
 
   public:
     Payment();                                       // Default constructor of Payment class
     Payment(char pMethod[], Cart* c, char pdate[]);  // Overloaded constructor of payment class

     char* getMethod();                               // Accessor to get Payment method
     void setMethod(char* pmethod[]);                 // Mutator to set Payment method
     double getPrice();                               // Accessor to get payment price
     void setPrice(double pPrice);                    // Mutator to set total Price
     char* getDate();                                 // Accessor to get payment Date
     void setDate(char* pDate);                       // Mutator to set payment price
     
     ~Payment();                                      // Payment destructor
  
};