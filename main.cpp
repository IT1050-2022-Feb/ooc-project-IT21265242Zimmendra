#include "Payment.h"
#include "category.h"
#include "admin.h"
#include "feedback.h"
#include "Order.h"
#include <iostream>
using namespace std;

int main()
{
  // Declaration of an dynamic object using class Admin
 Admin *admin1 = new Admin((char*) "AD001", (char*) "Zimmendra", (char*) "Zima1234!", (char*) "zima@gmail.com",  (char*) "0769654581");

// Declaration of an dynamic object using class Customer
Customer *cust1 = new Customer(150,(char*) "ID001", (char*) "2022-05-19", (char*) "Udayanga", (char*) "Imandi" ,(char*) "ImandiUdayanga", (char*) "Imandi123",(char*) "imandiudayanga@gmail.com", (char*) "0704208122");

// Declaration of an dynamic object using class Feedback
feedback *feed1 = new feedback((char*) "FD001", (char*)"Loved it",cust1);

// Declaration of an dynamic object using class Order
Order *order1 = new Order((char*) "OD001", 100000, (char*) "2022-05-19", cust1);

// Declaration of an dynamic object using class Cart
Cart *c1 = new Cart(cust1,0);

// Declaration of an dynamic object using class Payment
Payment *p1 = new Payment((char*) "Paypal", c1,(char*) "2022-05-18");

// Declaration of an dynamic object using class Package
package *pack1 = new package((char*) "Hotel and Food", (char*) "PD001");

// Declaration of an dynamic object using class Package
category *category1 = new category((char*) "Florist", 20, (char*) "PK001", (char*) "Package 1");

 delete admin1;
 delete cust1;
 delete feed1;
 delete order1;
 delete c1;
 delete p1;
 delete pack1;
 delete category1;
}