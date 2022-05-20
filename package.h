#pragma once

class package{
  private:
    char PID[5];
    char P_Name[25];
    char P_Des[50];
    int P_Price;
  public:
    package();
    package(char tpid[], char tpname[], char tpdes[], int tpprice);
    void setPackage();
    void displayDetails();
    ~package();
};