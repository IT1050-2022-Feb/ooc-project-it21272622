#pragma once

class hall{

  private:
    int HID;
    char H_Name[25];
    char H_hotel[25];

  public:
    hall();
    hall(int hallid, char hallname[], char hallhotel[]);
    void displayDetails();
    ~hall();
}; 