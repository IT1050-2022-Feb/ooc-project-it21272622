#pragma once

#include "registeredUser.h"
#include "report.h"
#define SIZE1 2 
#define SIZE2 2
#define SIZE3 2

class registeredUser;    //forward declaration 
class hotelManager;      //forward declaration

class admin{
  private:
    char A_ID[3];
    char A_Username[20];
    char A_Password[20];

    report *RP[SIZE3]; //uni-association

  public:
    admin();
    admin(char adminID[], char AU[], char AP[]);
    void login();
    void approveHotel();
    void manageUserAcc(registeredUser *RU[SIZE2]); //dependancy
    void manageHMAcc(hotelManager *HM[SIZE1]); //dependancy
    void displayDetails();
    ~admin();
};