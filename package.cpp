#include "package.h"
#include <iostream>
#include <cstring>
using namespace std;

 package::package() {
	 strcpy(package_name, "");
	 strcpy(package_id, "");
}
 package::package(char pname[], char pid[]) {
	 strcpy(package_name, pname);
	 strcpy(package_id, pid);
 }
 package::~package() {
	 cout << "package deleted" << endl;
 }
