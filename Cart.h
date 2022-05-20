#include "customer.h"
#include "package.h"
#define SIZE 6

// Implementation of the Class Cart
// Cart class has a one way assocation relationship with customer
// Cart class has a dependency relationship with the packages class(cart class is dependent on package class)
// Cart class has a dependency relationship with the payment class(payment class is dependent on the cart class)

class Cart
{
    private:
      char customerID[6];  // stores customer ID
      int nItemsInCart;    // Stores number of items currently in cart
      int maxItemsInCart;  // Stores max number of items that can be stored in a class
      double totPrice;     // Stores total price of packages added in class
      Customer *c1;        // Implementing one way association

    public:
      Cart();              // C
      Cart(Customer *pc1, int nItems);
      void addPackage(package *p1);
      void updatePackage(package *p1);
      void deletePackage(package *p1);
      void calculateTotPrice(package *p1[SIZE]);
      int getnItemsInCart();
      void setnItemsInCart(int n);
      int getmaxItemsInCart();
      void setmaxItemsInCart(int n);
      double getTotPrice();
      ~Cart();
     
};

