include <iostream>
using namespace std;

// admin class
class admin
{
private:
  char adminName[];
  char adminPassword[];

public:
  admin();
  admin(const char aadminName[20],const char aadminPassword[]);
  void updateDatabase;
  void addNewitems;
  void generateReports;
};

