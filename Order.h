class Order
{
private:
  char Order_ID[5];
  double Order_Amount;
  char Order_Date[8];
  int NoOfItems;
  char Customer_ID[5];

public:
  Order();
  Order(char OID[], double Oamt, char ODate[], int NoItems, char CusID[]);
  void setOrderID(char[]);
  char getOrderID();
  void setOrder_Amount(double Oamt);
  double getOrder_Amount();
  void setODate(char[]);
  char getODate();
  void setNoOfItems(int NoItems);
  int getNoOfItems();
  void setCustomer_ID(char CusID[]);
  char getCustomer_ID();
  ~Order();
};