#include <iostream>
#include <string>
#include <vector>
#include "ShiftHandoverLog.h"
#include "LogList.h"


void LogList::showLogs()
{
	int inp;
	
	for(int i=0; i<listOfLogs.size(); i++)
	{
		std::cout<<std::endl<<i+1<<". ";
		listOfLogs[i]->Show();
	}
	std::cout<<std::endl<<"Please choose the log to see details: ";
	std::cin>>inp;
	std::cin.ignore(1,'\n');
	if(inp<=listOfLogs.size())
	{
		std::cout<<std::endl<<"List of opened alcohol: "<<std::endl;
		listOfLogs[inp-1]->ShowAlcoholList();
		std::cout<<std::endl<<"List of changed products: "<<std::endl;
		listOfLogs[inp-1]->showProductList();
		return;

	}
	else return; 
}
void LogList::addLog(ShiftHandoverLog* targLog)
{
	listOfLogs.push_back(targLog);
	return;
}
