#include <iostream>
#include<cstring>
#include<string>
#include<User.h>
using namespace std;

//user class implementation

user::user()
{
  
}
user::user(const char ausername[20],const char aemail[],const char apassword[])
{
  strcpy(username,ausrename);
  strcpy(email,aemail);
  strcpy(password,apassword);
}
void user ::verifyLogging()
{
  
}
