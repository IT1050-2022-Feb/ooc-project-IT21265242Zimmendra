#include "customer.h"
#include "package.h"
#define SIZE 6
class Cart
{
    private:
      char customerID[6];
      int nItemsInCart;
      int maxItemsInCart;
      double totPrice;
      Customer *c1;

    public:
      Cart();
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

