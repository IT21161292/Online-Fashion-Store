#include <iostream>
using namespace std;


//user class
class user
{
private:
  char username[20];
  char email[];
  char password[];


public :
  user();
  user (const char ausername[20],const char aemail[],const char apassword[])
  void verifyLogging();
};
