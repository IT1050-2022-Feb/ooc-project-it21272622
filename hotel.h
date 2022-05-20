#pragma once

#include "hall.h"
#include "hotelManager.h"
#include "package.h"
#include "reservation.h"
#define SIZE1 2
#define SIZE2 3
#define SIZE3 2
#define SIZE4 2

class hotelManager; //forward declaration 

class hotel{
  private:
    int HotelID;
    char Hotel_Name[25];
    char H_Address[50];
    int Hotel_number;

    hall *Hall[SIZE1];           //composition
    hotelManager *HM[SIZE2];     //bi-association
    package *PKG[SIZE3];         //uni-association
    reservation *RSV[SIZE4];     //composition

  public:
    hotel();
    hotel(int hotelid, char hotelname[], char hoteladdress[],int hotelno);
    void displayDetails();
    ~hotel(); 
};