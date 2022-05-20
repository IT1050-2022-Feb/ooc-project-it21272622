#pragma once

class guestUser{
  protected:
    char C_Name[25];
    char C_NIC[12];
    char C_Email[25];
    int C_Mobile;

  public:
    guestUser();
    guestUser(char pname[], char pnic[], char pem[], int pmob);
    void displayDetails();
    void registerUser();
    ~guestUser();
};