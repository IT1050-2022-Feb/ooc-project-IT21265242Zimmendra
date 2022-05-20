#include "package.h"
#include <iostream>
#include <cstring>
using namespace std;

 package::package()// implement constructor
 {
	 strcpy(package_name, "");
	 strcpy(package_id, "");
}
 package::package(char pname[], char pid[])//implement overloaded constructor
{
	 strcpy(package_name, pname);
	 strcpy(package_id, pid);
 }
 package::~package()// implement destructor
{
	 cout << "package deleted" << endl;
 }
