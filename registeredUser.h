#pragma once

#include "guestUser.h"
#include "payment.h"
#define SIZE1 2

class payment;

//inheritance
class registeredUser : public guestUser{
  protected:
    char CID[6];
    char C_Username[20];
    char C_Password[20];
    payment *PAY[SIZE1]; //bi-association

  public:
    registeredUser();
    registeredUser(char pcid[], char pname[], char pnic[], char pem[], int pmob, char cu[], char cp[]);
    void login();
    void displayDetails();
    ~registeredUser();
};
  