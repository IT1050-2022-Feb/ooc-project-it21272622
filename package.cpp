#include "package.h"
#include <iostream>
#include <cstring>
using namespace std;

package::package()
{
  strcpy(PID, "");
  strcpy(P_Name, "");
  strcpy(P_Des, "");
  P_Price = 0;
}

package::package(char tpid[], char tpname[], char tpdes[], int tpprice)
{
  strcpy(PID, tpid);
  strcpy(P_Name, tpname);
  strcpy(P_Des, tpdes);
  P_Price = tpprice;
}

void package::setPackage()
{
  
}

void package::displayDetails()
{
  
}

package::~package()
{
  cout << "Package class destructor executed" << endl;
}