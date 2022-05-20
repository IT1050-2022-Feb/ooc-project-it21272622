#include <iostream>
#include <cstring>
#include "payment.h"
using namespace std; 

payment::payment()
{
  strcpy(Pay_ID, "");
  strcpy(cardType, "");
	strcpy(cardHolder,"");
  cardNo = 0;
	payAmount = 0;
}

payment::payment(char tpayID[], char tcardType[], char tcardHolder[], int tcardNo, double tpayAmount)
{
  strcpy(Pay_ID, tpayID);
  strcpy(cardType, tcardType);
	strcpy(cardHolder,tcardHolder);
  cardNo = tcardNo;
	payAmount = tpayAmount;
}

void getDetails()
{
    
}

void payment::displayDetails()
{
  cout << cardType <<  endl;
	cout<< cardHolder << endl;
	cout<< payAmount; 
}

payment::~payment()
{
  cout << "Payment class destructor called" << endl;
}