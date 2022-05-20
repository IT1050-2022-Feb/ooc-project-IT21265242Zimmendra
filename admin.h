#include"user.h"

class Admin : public User
{
	protected:
		char admin_ID[6];

	public:
		Admin(); // conrructor called for registered Admin
		Admin(char adID[], char username[], char password[], char email[], char contact_info[]); // overloaded constructor for registration
		
		void setadminID(char adID[]); // setter for admin ID
		char* getadminID(); // getter for admin ID

		~Admin(); // destructor called for registered Admin
};