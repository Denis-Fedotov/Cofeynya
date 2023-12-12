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
	temp->FillInvoice(fillingUser, pList);
	ListOfInvoice.push_back(temp);
	return;
}
void Report::SeeInvoiceList()
{
	int num=0;
	Invoice* temp;
	std::cout<<"Invoices: "<<"/n";
	for (int i=0; i<ListOfInvoice.size(); i++){
		std::cout<<i+1<<")";
		std::cout<<ListOfInvoice[i]<<"/n";
	}
	std:: cout<< "Please select invoice or exit(0=exit) ";
	std:: cin >>num;
	if (num!=0 && num<=ListOfInvoice.size()){
		temp=ListOfInvoice[num-1];
		temp->ShowWareList();
	}
	return;
}
void Report::show()
{
	std::cout<<"Company: " << NameOfCompany << "Date: "<< date<<"/n";
	return;
}
