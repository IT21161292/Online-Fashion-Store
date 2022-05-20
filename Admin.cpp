#include <iostream>
#include<cstring>
#include<string>
#include<Admin.h>
using namespace std;

admin::admin()
{
  
}
admin::admin (char aadminName[20],char aadminPassword[])
{
  strcpy (adminName,aadminName);
  strcpy (adminPassword,aadminPassword);
}
void admin:: updateDatabase
{
  
}
void admin:: addNewitems
{
  
}
void admin:: generateReports
{
  cout<<Report<<endl;
}