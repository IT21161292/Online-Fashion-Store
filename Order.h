include <iostream>
using namespace std;

// order class
class order
{
private:
  int orderId;
  string dateCreated;
  string dateShipped;
  string customerName;

public:
  order ();
  order (int aorderId,string adateCreated,string adateShipped,string acustomerName);
  void placeOrder();
};