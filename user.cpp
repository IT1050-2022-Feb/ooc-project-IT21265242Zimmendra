#include <iostream>
#include <cstring>
#include"user.h"
using namespace std;

User::User()//implement constructor
{
	strcpy(username, "");
	strcpy(password, "");
	strcpy(email, "");
	strcpy(contact_info, "");
}

User::User(char uname[], char pword[], char e_mail[], char cinfo[])//implement overloaded constructor
{
	strcpy(username,uname);
	strcpy(password, pword);
	strcpy(email, e_mail);
	strcpy(contact_info,cinfo);
}

User::~User()//implement destructor
{
	cout << "User log out " << endl;
}