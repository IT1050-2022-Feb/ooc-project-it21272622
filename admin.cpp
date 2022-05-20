#include <iostream>
#include <cstring>
#include "admin.h"
using namespace std;

admin::admin()
{
  strcpy(A_ID, "");
  strcpy(A_Username, "");
  strcpy(A_Password, "");
}

admin::admin(char adminID[], char AU[], char AP[])
{
  strcpy(A_ID, adminID);
  strcpy(A_Username, AU);
  strcpy(A_Password, AP);
}

void admin::login()
{

}

void admin::approveHotel() 
{
  
}

void admin::manageUserAcc(registeredUser *RU[SIZE2])
{

}

void admin::manageHMAcc(hotelManager *HM[SIZE1]) 
{

}

void admin::displayDetails()
{
  cout << A_ID << endl;
  cout << A_Username << endl;
  cout << A_Password << endl;
}

admin::~admin()
{
  cout << "Admin class destructor executed" << endl;
}