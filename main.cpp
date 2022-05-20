#include <iostream>
#include "guestUser.h"       
#include "registeredUser.h"   
#include "hotel.h"          
#include "hall.h"            
#include "admin.h"            
#include "hotelManager.h"     
#include "reservation.h"      
#include "package.h"          
#include "payment.h"          
#include "report.h"           

using namespace std;

int main() {

  //---- Object Creation ----
  guestUser *gU1 = new guestUser();
  registeredUser *rU1 = new registeredUser();
  hotel *htl1 = new hotel();
  hall *hl1 = new hall(); 
  admin *A1 = new admin();
  hotelManager *hM1 = new hotelManager();
  reservation *rSV1 = new reservation();
  package *pKG1 = new package();
  payment *pY1 = new payment();
  report *rP1 = new report();

  //----Deleting created dynamic objects-----
  delete gU1;
  delete rU1;
  delete htl1;
  delete hl1;
  delete A1;
  delete hM1;
  delete rSV1;
  delete pKG1;
  delete pY1;
  delete rP1;

  return 0;
}