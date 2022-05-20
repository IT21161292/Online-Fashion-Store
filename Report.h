include <iostream>
using namespace std;

// Report class
class Report
{
private:
  int report_No;
  char report_date[];

public:
  Report();
  Report(int Copy_report_No,const char Copy_report_date[]);

  void generateReports;
};

