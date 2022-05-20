#include<iostream>
#include<cstring>
#include "hotelManager.h"
using namespace std;


hotelManager::hotelManager()
{
  strcpy(M_ID, "");
  strcpy(C_Name, "");
  strcpy(C_Email, "");
  C_Mobile=0;
  strcpy(M_Username, "");
  strcpy(M_Password, "");
}

hotelManager::hotelManager(char managerID[], char pname[], char pnic[], char pemail[], int pmob, char MU[], char MP[])
{
  strcpy(M_ID, managerID);
  strcpy(C_Name, pname);
  strcpy(C_NIC, pnic);
  strcpy(C_Email, pemail);
  C_Mobile = pmob;
  strcpy(M_Username, MU);
  strcpy(M_Password, MP);
}

void hotelManager::login()
{
  
}
void hotelManager::setHotelDetails()
{
  
}
void hotelManager::sethallDetails()
{
  
}

void hotelManager::displayDetails()
{
  cout << M_ID << endl;
  cout << C_Name << endl;
  cout << C_NIC << endl;
  cout << C_Email << endl;
  cout << C_Mobile << endl;
  cout << M_Username << endl;
  cout << M_Password << endl;
}
hotelManager::~hotelManager()
{
  cout << "Hotel Manager class destructor executed" << endl;
}