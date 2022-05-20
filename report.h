#pragma once

#include "payment.h"
#include "reservation.h"
#define SIZE1 2
#define SIZE2 2

class report
{
private:
	char reportNo[6];
  char reportName[50];
  payment *PAY[SIZE1];     //uni-association
  reservation *RSV[SIZE2]; //uni-association
	
public:
  report();
	report(char reNo[], char reName[]);
	void genarateFinancialReport();
	void genarateReservationReport();
	void displayFinancialReport();
	void displayReservationReport();
  ~report();
};