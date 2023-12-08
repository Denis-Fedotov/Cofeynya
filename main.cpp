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
#define cin std::cin
#define endl std::endl
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
		system("cls");
		cout<<"Choose, what you want to do: "<<endl;
		cout<<"0. Close the program."<<endl;
		cout<<"1. Log into the system."<<endl;
		cout<<"2. Log out of the system."<<endl;
		cout<<"3. Open the shift."<<endl;
		cout<<"4. Accept the product shipment."<<endl;
		cout<<"5. See the product list."<<endl;
		cout<<"6. Input a sale of the product."<<endl;
		cout<<"7. Open the alcohol bottle."<<endl;
		cout<<"8. Add product to the list."<<endl;
		cout<<"9. Remove product from the list."<<endl;
		cout<<"10. Add employee to the list."<<endl;
		cout<<"11. Remove employee from the list."<<endl;
		cout<<"12. See the employee list."<<endl;
		cout<<"13. See the invoices of the current report."<<endl;
		cout<<"14. See the alcohol list of the current shift."<<endl;
		cout<<"15. See the archived reports."<<endl;
		cout<<"16. See the archived handover logs."<<endl;
		cout<<"17. Close the shift."<<endl;
		cout<<activeUser->GetName()<<">";
		cin>>input;
		//TODO process user input
	}
	
	
	
	
	
	return 0;
}