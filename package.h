
class package
{
private:
	
	char package_name[10];
	char package_id[10];
	
public: 
	package();
	package(char pname[], char pid[]);
	void setpackagename(char pname[]);
	char getpackagename();
	
	void setpackageid(char pid[]);
	char getpackageid();

	~package();
};

