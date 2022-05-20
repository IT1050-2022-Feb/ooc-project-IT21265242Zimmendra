#include <iostream>
#define SIZE 1
#include "category.h"
#include <cstring>
using namespace std;

category::category(){
  packages[0] = new package("Default","Default");
  strcpy(categoryName, "Default");
  noOfClicks = 0;
};
category::category(char catName[], int noClicks,char pkid1[], char pkname1[]){
  packages[0] = new package(pkid1, pkname1);
  strcpy(categoryName, catName);
  noOfClicks = noClicks;
};

category::~category(){
  cout << "Deleting Category" <<endl;
  for(int i = 0; i < SIZE; i++){
    delete packages[i];
  }
};