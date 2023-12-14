#include <iostream>
#include <string>
#include <vector>
#include "Report.h"
#include "ReportList.h"
using namespace std;
void ReportList::ShowReports()
{
    for (int i = 0; i < ListOfReports.size(); i++){
        cout<<i+1 <<" Report"<<endl;
        cout<<ListOfReports[i]<<endl;
    }
        return;
}
void ReportList::addReport(Report* targRep)
{
        ListOfReports.push_back(targRep);
        cout<<"Report added"<<endl;
	return;
}
