#pragma once

//create class
class User
{
protected:
	char username[15];
	char password[8];
	char email[40];
	char contact_info[10];

public:
	User(); // constructor
	User(char uname[], char pword[], char e_mail[], char cinfo[]); // overloaded constructor for registration

	void setpassword(char pword[]); // setter for password
	char* getpassword(); // getter for password

	void setcontactinfo(char cinfo[]); // seter for contact info
	char* getcontactinfo(); // getter for contact info

	void setusername(char uname[]); // setter user name
	char* getusername(); // getter for user name

	void setemail(char e_mail[]); // setter for e-mail
	char* getemail(); // getter for e-mail

	~User(); // destructor called for registered user

};