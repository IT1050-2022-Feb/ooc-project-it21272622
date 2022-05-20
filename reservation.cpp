#include <iostream>
#include <cstring>
#include "reservation.h"
using namespace std;

class package;
class payment;

reservation::reservation()
{
  strcpy(RID, "");
  strcpy(R_Des, "");
  strcpy(R_Date, "");
  
  PKG = new package();
  PAY = new payment();
}

reservation::reservation(char prid[], char rdes[], char rdate[])
{
  strcpy(RID, prid);
  strcpy(R_Des, rdes);
  strcpy(R_Date, rdate);

  PKG = new package("P0001", "Platinum", "500 crowd for all day", 175000);
  PAY = new payment("IN0001", "Mastercard", "NIRMAL PERERA", 12341234, 175000);
}

void reservation::setReservation()
{
 
}

void reservation::updateReservation()
{
  
}

void reservation::removeReservation()
{
  
}

void reservation::dsisplayDetails()
{
  
}

reservation::~reservation()
{
  delete PKG;
  delete PAY;
  cout << "Reservation class destructor executed" << endl;
}