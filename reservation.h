#pragma once

#include "package.h"
#include "payment.h"

class package; //forward declaration 
class payment; //forward declaration

class reservation {
  private:
    char RID[6];
    char R_Des[50];
    char R_Date[10];
    package *PKG; //composition
    payment *PAY; //composition
  public:
    reservation();
    reservation(char prid[], char rdes[], char rdate[]);
    void setReservation();
    void updateReservation();
    void removeReservation();
    void dsisplayDetails();
    ~reservation();
};