#include <iostream>
#include "feedback.h"
#include<cstring>
using namespace std;

feedback::feedback(){
  strcpy(feedbackID,"Default");
  strcpy(feedbackDesc,"Default");
  strcpy(customerID, "Default");
}

feedback::feedback(char fID[], char fDesc[], Customer *pCus){
  strcpy(feedbackID,fID);
  strcpy(feedbackDesc,fDesc);
  strcpy(customerID, pCus -> getcid());
}

feedback::~feedback(){
  cout<<"Feedback Deleted"<<endl;
};
