#include <iostream>
#include <cstring>
#include"admin.h"
using namespace std;

Admin::Admin()
{
	strcpy(admin_ID, "");
}

Admin::Admin(char adID[],char username[],char password[] , char email[] , char contact_info[]):User(username,password,email,contact_info)
{
	strcpy(admin_ID, adID);
}

Admin::~Admin()
{
	cout << "Admin log out " << endl;
}