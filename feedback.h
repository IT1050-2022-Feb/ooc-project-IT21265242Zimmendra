#include "customer.h"

class feedback{
  private:
    char customerID[5];
    char feedbackID[5];
    char feedbackDesc[500];
    Customer *cus;
  public:
    feedback();//Default Constructor
    feedback(char fID[], char fDesc[], Customer *pCus); //Overloaded constructor
    void setFeedbackId(char fId[]);
    char getFeedbackId();
    void setFeedbackDesc(char fDesc[]);
    char getFeedbackDesc();
    void displayFeedback();
    ~feedback(); //Destructor
};