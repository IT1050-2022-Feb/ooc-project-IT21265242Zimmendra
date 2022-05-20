//create class 
class package
{
private:
	
	char package_name[10];
	char package_id[10];
	
public: 
	package();//constructor
	package(char pname[], char pid[]);//overloaded costructor
	void setpackagename(char pname[]);//setter
	char getpackagename();//getter
	
	void setpackageid(char pid[]);//setter
	char getpackageid();//getter

	~package();//destructor
};

