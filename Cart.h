
class Cart
{
    private:
      char customerID[6];
      int nItemsInCart;
      int maxItemsInCart;
      double totPrice;

    public:
      Cart();
      Cart(char cid[],int nItems);
      void addPackage();
      void updatePackage();
      void deletePackage();
      void calculateTotPrice();
      int getnItemsInCart();
      void setnItemsInCart(int n);
      int getmaxItemsInCart();
      void setmaxItemsInCart();
      double getTotPrice();
      ~Cart();
     
};

