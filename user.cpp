#include <iostream>
#include <cstring>
#include"user.h"
using namespace std;

User::User()
{
	strcpy(username, "");
	strcpy(password, "");
	strcpy(email, "");
	strcpy(contact_info, "");
}

User::User(char uname[], char pword[], char e_mail[], char cinfo[])
{
	strcpy(username,uname);
	strcpy(password, pword);
	strcpy(email, e_mail);
	strcpy(contact_info,cinfo);
}

User::~User()
{
	cout << "User log out " << endl;
}