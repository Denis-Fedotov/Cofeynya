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
	Report* currentReport;
	ShiftHandoverLog* currentLog; 
	User* activeUser; 
	
	//User input string.
	int input=-1;
	
	//User must create the first admin. 
	listOfWorkers.addEmployee(manager);
	
	
	
	while(input!=0)
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
		if(activeUser!=0) cout<<"noUser"<<">";
		else cout<<activeUser->GetName()<<">";
		
		cin>>input;
		
		switch(input)
		{
			case 1:
			{
				listOfWorkers.login();
				break;
			}
			case 2:
			{
				activeUser=0;
				break;
			}
			case 3:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(manager)) break;
				
				std::string locInput="y";
				while(locInput=="y")
				{
					listOfWorkers.addToShift(listOfWorkers.chooseEmployee());
					cout<<endl<<"If you wish to add another user? y/n"<<endl;
					cout<<">";
					cin>>locInput;
				}
				break;
			}
			case 4:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(baker)) break;
				
				currentReport->AttachInvoice(activeUser, &listOfProducts);
				break;
			}
			case 5:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(baker)) break;
				
				listOfProducts.showProducts();
				break;
			}
			case 6:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(barman)) break;
				
				
				int am;
				cout<<endl<<"Please enter the amount sold: ";
				cin>>am;
				listOfProducts.chooseProduct()->changeAmount(am);
				break;
			}
			case 7:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(barman)) break;
				
				
				currentLog->OpenAlcohol();
				break;
			}
			case 8:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(manager)) break;
				
				listOfProducts.addProduct();
				break;
			}
			case 9:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(manager)) break;
				
				listOfProducts.removeProduct();
				break;
			}
			case 10:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(manager)) break;
				
				int type;
				cout<<endl<<"Please specify: "<<endl;
				cout<<"1. Add manager"<<endl;
				cout<<"2. Add barman"<<endl;
				cout<<"3. Add baker"<<endl;
				cout<<">";
				cin>>type;
				
				switch(type)
				{
					case 1:
					{
						listOfWorkers.addEmployee(manager); break;
					}
					case 2:
					{
						listOfWorkers.addEmployee(barman); break;
					}
					case 3:
					{
						listOfWorkers.addEmployee(baker); break;
					}
				}	
				break;
			}
			case 11:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(manager)) break;
				
				listOfWorkers.removeEmployee();
				break;
			}
			case 12:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(manager)) break;
				
				listOfWorkers.showEmployees();
				break;
			}
			case 13:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(manager)) break;
				
				currentReport->SeeInvoiceList();
				break;
			}
			case 14:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(manager)) break;
				
				currentLog->ShowAlcoholList();
				break;
			}
			case 15:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(manager)) break;
				
				reportArchive.ShowReports();
				break;
			}
			case 16:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(manager)) break;
				
				logArchive.showLogs();
				break;
			}
			case 17:
			{
				if(activeUser==0) break;
				if(!activeUser->CheckAccess(manager)) break;
				
				std::string locInput="owo";
				cout<<endl<<"Do you need to fill the report? y/n"<<endl;
				cout<<">";
				cin>>locInput;
				
				if(locInput=="y")
				{
					currentReport->FillReport();
					reportArchive.addReport(currentReport);
				}			
				
				currentLog->FillLog(activeUser, &listOfProducts);
				logArchive.addLog(currentLog);
				listOfWorkers.clearShift();
				break;
			}
		}
		
	}
	
	
	
	
	
	return 0;
}