#include <iostream>
#include <string>
#include <vector>
#include "Report.h"
#include "ReportList.h"

void ReportList::ShowReports()
{
    int inp;
    for (int i = 0; i < ListOfReports.size(); i++){
        std::cout<<i+1 <<". Report"<<std::endl;
        ListOfReports[i]->show();
    }
    std::cout<<std::endl<<"Please choose the report to see details: ";
    std::cin>>inp;
    std::cin.ignore(1,'\n');
    if(inp<=ListOfReports.size() && inp>0)
    {
            std::cout<<std::endl<<"Report is: "<<std::endl;
            ListOfReports[inp-1]->SeeInvoiceList();
            return;

    }
    else return;
}
void ReportList::addReport(Report* targRep)
{
        ListOfReports.push_back(targRep);
        std::cout<<"Report added"<<std::endl;
	return;
}
