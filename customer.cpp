#include <iostream>
#include <cstring>
#include"customer.h"
using namespace std;

Customer::Customer()
{
	number_of_guest = 0;
	strcpy(date, "");
	strcpy(name_of_the_groom, "");
	strcpy(name_of_the_bride, "");
}

Customer::Customer(int noofguest, char dateofwedding[], char nameofthegroom[], char nameofthebride[], char username[], char password[], char email[], char contact_info[]) :User(username, password, email, contact_info)
{
	number_of_guest=noofguest;
	strcpy(date, dateofwedding);
	strcpy(name_of_the_groom, nameofthegroom);
	strcpy(name_of_the_bride,nameofthebride);
}

Customer::~Customer()
{
	cout << "Cart destroyed " << endl;
}