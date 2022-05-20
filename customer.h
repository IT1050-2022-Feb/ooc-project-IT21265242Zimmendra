#pragma once
#include "user.h"
//#include"feedback.h"
//#include"order.h"
//#include"cart.h"

class Customer : public User
{
protected:
	int number_of_guest;
  char customer_ID[5];
	char date[10];
	char name_of_the_groom[35];
	char name_of_the_bride[35];

	//Cart* Cart1; 
	//Feedback* Feedback1;

public:
	Customer(); // constructor
	Customer(int noofguest, char CID[], char dateofwedding[], char nameofthegroom[], char nameofthebride[] , char username[], char password[], char email[], char contact_info[]); // overloaded constructor for registration

	void setnumberofguest(int noofguest); // setter for number of guest
	int getnumberofguest(); // getter for number of guest

	void setdate(char dateofwedding[]); // seter for date
	char* getdate(); // getter for date

	void setnameofgroom(char nameofthegroom[]); // setter for name of the groom
	char* getnameofgroom(); // getter for name of the groom

	void setnameofbride(char nameofthebride[]); // setter for name of the bride
	char* getnameofbride(); // getter for name of the bride

  void setcid(char cid[]); // setter for customer ID
  char* getcid(); // getter for customer ID

	~Customer(); // destructor called for registered customer
};