#pragma once

#include "guestUser.h"
#include "hotel.h"
class hotel; //forward declaration

//inheritance
class hotelManager : public guestUser{
  private:
    char M_ID[6];
    char M_Username[30];
    char M_Password[20];

    hotel *Hotel; //bi-association

  public:
    hotelManager();
    hotelManager(char managerID[], char pname[], char pnic[], char pemail[], int pmob, char MU[], char MP[]);
    void login();
    void setHotelDetails();
    void sethallDetails();
    void displayDetails();
    ~hotelManager();

};