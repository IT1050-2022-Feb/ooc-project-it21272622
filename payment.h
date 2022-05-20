#pragma once

#include "registeredUser.h"
class registeredUser; //forward declaration

class payment
{
private:
  char Pay_ID[6];
	char cardType[20];
	char cardHolder[40];
  int cardNo;
	double payAmount;
  registeredUser *RU; //bi-association
	
public:
  payment();
	payment(char tpayID[], char tcardType[], char tcardHolder[], int tcardNo, double tpayAmount);
	void updateDetails();
	void getDetails();
	void displayDetails();
	~payment();
};