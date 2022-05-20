#include "package.h"
#define SIZE 1
class category{

  private:
    package *packages[SIZE];
    char categoryName[20];
    int noOfClicks;

  public:
    category();
    category(char catName[], int noClicks,char pkid1[], char pkname1[]);
    void setCategoryName(char catName[]);
    char getCategoryName();
    void setNoofClicks(int noClicks);
    int getNoofClicks();
    void displayCategory();
    ~category();

};