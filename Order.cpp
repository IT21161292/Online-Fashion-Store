#include <iostream>
#include<cstring>
#include<string>
#include<Order.h>
using namespace std;

order :: order()
{
  
}

order :: order(int aorderId,string adateCreated,string adateShipped,string acustomerName)
{
  orderId=aorderId;
  strcpy(dateCreated,adateCreated);
  strcpy(dateShipped,adateShipped);
  strcpy(customerName,acustomerName);
  
}

void order :: placeOrder()
{
  
}