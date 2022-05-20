#include <iostream>
#include<cstring>
#include<string>
#include"Customer.h"
using namespace std;

//Customer class implementation

Customer::Customer()
{
  
}
Customer(const char Copy_customer_name[20],const char Copy_Address[],const char Copy_Credit_infomation[])
{
  strcpy(customer_name,Copy_customer_name);
  strcpy(Address,Copy_Address);
  strcpy(Credit_infomation,Copy_Credit_infomation);
}
void Customer::register()
{
//type code here 
}
void Customer::login();
{
//type code here  
}
void Customer::update_password(); 
{
//type code here  
}
