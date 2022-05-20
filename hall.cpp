#include <iostream>
#include <cstring>
#include "hall.h"
using namespace std;

    hall::hall(){
      HID = 0;
      strcpy(H_Name, "");
      strcpy(H_hotel, "");
    }

    hall::hall(int hallid, char hallname[], char hallhotel[]){
      int HID = hallid;
      strcpy(H_Name,hallname);
      strcpy(H_hotel,hallhotel);
    }

    void hall::displayDetails(){
      cout << HID << endl;
      cout << H_Name << endl;
      cout << H_hotel << endl;
      cout << endl;
    }

    hall::~hall(){
      cout<<"Hall class destructor executed"<<endl;
    }