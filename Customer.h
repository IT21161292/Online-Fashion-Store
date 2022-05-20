#include <iostream>
using namespace std;


//Customer class
class Customer
{
private:
  char Customer_Name[20];
  char Address[];
  char Credit_information[];


public :
  Customer();
  Customer(const char Copy_customer_name[20],const char Copy_Address[],const char Copy_Credit_infomation[])
  void register();
  void login();
  void update_password();
};
