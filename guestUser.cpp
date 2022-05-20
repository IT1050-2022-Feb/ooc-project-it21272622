#include <iostream>
#include <cstring>
#include "guestUser.h"
using namespace std;


guestUser::guestUser()
{
  strcpy(C_Name, "");
  strcpy(C_NIC, "");
  strcpy(C_Email,"");
  C_Mobile = 0;
}

guestUser::guestUser(char pname[], char pnic[], char pem[], int pmob)
{
  strcpy(C_Name, pname);
  strcpy(C_NIC, pnic);
  strcpy(C_Email, pem);
  C_Mobile = pmob;
}

void guestUser::registerUser()
{
  
}

void guestUser::displayDetails()
{
  cout << C_Name << endl;
  cout << C_NIC << endl;
  cout << C_Email << endl;
  cout << C_Mobile << endl;
  cout << endl;
}

guestUser::~guestUser()
{
  cout << "Guest user class destructor executed" << endl;
}