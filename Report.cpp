#include <iostream>
#include <string>
#include <vector>
#include "Invoice.h"
#include "TrackedProdList.h"
#include "User.h"
#include "Report.h"


void Report::FillReport()
{
	std::cout<<"Please enter Company name : ";
	std::cin>>NameOfCompany; std::cout<<"/n";
	std::cout<<"Please enter today's date: ";
	std::cin>>date; std::cout<<"/n";
	
	return;
}
void Report::AttachInvoice(User* fillingUser,  TrackedProdList* pList)
{
	
	Invoice* temp;
	ListOfInvoice.push_back(temp);
	return;
}
void Report::SeeInvoiceList()
{
	std::cout<<"Invoices: "<<"/n";
	for (int i=0; i<ListOfInvoice.size(); i++){
		std::cout<<i+1<<")";
		std::cout<<ListOfInvoice[i]<<"/n";
	}
	return;
}
void Report::show()
{
	std::cout<<"Company: " << NameOfCompany << "Date: "<< date<<"Invoices: ";
	for (int i=0; i<ListOfInvoice.size(); i++){
		std::cout<<i+1<<")";
		std::cout<<ListOfInvoice[i]<<"/t";
	}
	return;
}
