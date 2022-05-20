#include <iostream>
#include <cstring>
#include "hotel.h"
using namespace std;

hotel::hotel(){
  HotelID=0;
  strcpy(Hotel_Name,"");
  strcpy(H_Address,"");
  Hotel_number=0;

  Hall[0]=new hall();
  Hall[1]=new hall();

  RSV[0]=new reservation();
  RSV[1]=new reservation();
}

hotel::hotel(int hotelid, char hotelname[], char hoteladdress[],int hotelno){
  HotelID=hotelid;
  strcpy(Hotel_Name,hotelname);
  strcpy(H_Address,hoteladdress);
  Hotel_number=hotelno;

  Hall[0]=new hall(101, "River Faced", "City Hotel");
  Hall[1]=new hall(102, "Forest Faced", "Silver Crown");

  RSV[0]=new reservation("R00001", "Reserved for a wedding" , "2022/12/11");
  RSV[1]=new reservation("R00002", "Reserved for a homecoming party" , "2022/04/22");
}

void hotel::displayDetails(){
  cout << HotelID << endl;
  cout << Hotel_Name << endl;
  cout << H_Address << endl;
  cout << Hotel_number << endl;
  cout << endl;
}

hotel::~hotel(){
  cout<<"Hotel class destructor executed"<<endl;
  for(int i=0;i<SIZE1;i++){
    delete Hall[SIZE1];
  }
  for(int i=0;i<SIZE4;i++){
    delete RSV[SIZE4];
  }
}