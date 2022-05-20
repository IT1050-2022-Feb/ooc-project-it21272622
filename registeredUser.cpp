#include <iostream>
#include <cstring>
#include "registeredUser.h"
using namespace std;

registeredUser::registeredUser()
{
  strcpy(CID, "");
  strcpy(C_Name, "");
  strcpy(C_NIC, "");
  strcpy(C_Email, "");
  C_Mobile = 0;
  strcpy(C_Username, "");
  strcpy(C_Password, "");
}

registeredUser::registeredUser(char pcid[], char pname[], char pnic[], char pem[], int pmob, char cu[], char cp[])
{ 
  strcpy(CID, pcid);
  strcpy(C_Name, pname);
  strcpy(C_NIC, pnic);
  strcpy(C_Email, pem);
  C_Mobile = pmob;
  strcpy(C_Username, cu);
  strcpy(C_Password, cp);
}

void registeredUser::login()
{
  
}

void registeredUser::displayDetails()
{
  cout << C_Username << endl;
  cout << C_Password << endl;
  cout << endl;
}

registeredUser::~registeredUser()
{
  cout << "Registered user class destructor executed" << endl;
}