#include <iostream>
#include <string>
#include <vector>
#include "Report.h"
#include "ReportList.h"
using namespace std;
void ReportList::ShowReports()
{

}
void ReportList::addReport(Report* targRep)
{
        ListOfReports.push_back(targRep);
        cout<<"Report added"<<endl;
	return;
}
