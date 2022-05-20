#include "customer.h"
#include "package.h"
#define SIZE 6

// Implementation of the Class Cart
// Cart class has a one way association relationship with customer
// Cart class has a one way association relationship with the packages class
// Cart class has a dependency relationship with the payment class(payment class is dependent on the cart class)

class Cart
{
    private:
      char customerID[6];     // stores customer ID
      int nItemsInCart;       // Stores number of items currently in cart
      int maxItemsInCart;     // Stores max number of items that can be stored in a class
      double totPrice;        // Stores total price of packages added in class
      Customer *c1;           // Implementing one way association
      package *cartItems[SIZE];  // Array to store added packages

    public:
      Cart();                           // Default Constructor
      Cart(Customer *pc1, int nItems);  // Overloaded Constructor 
      void addPackage(package *p1);     // function to add Packages to cart
      void updatePackage(package *p1);  // function to update Packages in cart
      void deletePackage(package *p1);  // function to delete Packages in cart
      void calculateTotPrice();         // function to calculate  totalPrice of Packages

      int getnItemsInCart();            // Accessor to get number of items in cart
      void setnItemsInCart(int n);      // Mutator to set number of items in cart 
      int getmaxItemsInCart();          // Accessor to get max of Items in cart
      void setmaxItemsInCart(int n);    // Mutator to set number of items in cart
      double getTotPrice();             // Accessor to get total Price of all Packages
      ~Cart();                          // Cart destructor
     
};

