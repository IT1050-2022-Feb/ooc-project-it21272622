#include <iostream>
#include <cstring>
#include "report.h"
using namespace std;

report::report()
{
  strcpy(reportNo, "");
  strcpy(reportName, "");
}

report::report(char reNo[], char reName[])
{
	strcpy(reportNo, reNo);
  strcpy(reportName, reName);
}

void report::genarateFinancialReport()
{
  
}

void report::genarateReservationReport()
{
  
}

void report::displayFinancialReport()
{
  
}

void report::displayReservationReport()
{
  cout << reportNo << endl;
  cout << reportName << endl;
  cout << endl;
}

report::~report()
{
  cout << "Report class destructor executed" << endl;
}
