#include <iostream>
#include<cstring>
#include<string>
#include"Report.h"

using namespace std;

Report::Report()
{
  
}
Report(int report_No,const char report_date[]);
{
  report_no = copy_Report_no;
  strcpy (report_date,copy_report_date);
}

void Report:: Genarate_report()
{
  //type code here 
}
