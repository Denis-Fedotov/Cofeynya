#include <iostream>
#include <string>

#include "Product.h"
#include "TrackedProduct.h"
#include "Alcohol.h"
#include "User.h"
#include "TrackedProdList.h"
#include "Invoice.h"
#include "Report.h"
#include "ShiftHandoverLog.h"
#include "LogList.h"
#include "EmployeeList.h"
#include "ReportList.h"

#define cout std::cout


int main()
{
	//Core objects. Everything that nees to interact with anything goes through them. 
	LogList logArchive;
	ReportList reportArchive;
	EmployeeList listOfWorkers;
	TrackedProdList listOfProducts;
	Report currentReport;
	ShiftHandoverLog currentLog; 
	User* activeUser; 
	
	//User input string.
	std::string input="owo";
	
	//User must create the first admin. 
	listOfWorkers.addEmployee(manager);
	
	while(input!="0")
	{
		//TODO display menu 
		//TODO process user input
	}
	
	
	
	
	
	return 0;
}