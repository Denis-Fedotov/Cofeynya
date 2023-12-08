#include <iostream>
#include <string>
#include <vector>
#include "TrackedProdList.h"
#include "User.h"
#include "Alcohol.h"
#include "ShiftHandoverLog.h"


void ShiftHandoverLog::ShowAlcoholList()
{
	for(int i=0; i<listOfAlcohol.size(); i++)
	{
		listOfAlcohol[i]->show();
	}
	return;
}
void ShiftHandoverLog::FillLog(User* fillingUser, TrackedProdList* pList)
{
	NameOfBarman = fillingUser->GetName();
	std::cout<<std::endl<<"Please enter today's date: ";
	std::cin>>Date;
	pList->getChanged(&ListOfProduct);
	return;
}
void ShiftHandoverLog::OpenAlcohol()
{
	Alcohol* temp = new Alcohol;
	temp->fillRecord();
	listOfAlcohol.push_back(temp);
	return;
}
void ShiftHandoverLog::Show()
{
	std::cout<<std::endl<<"Name: "<<NameOfBarman<<std::endl<<"  Date: "<<Date;
	return;
}
void ShiftHandoverLog::showProductList()
{
	for(int i=0; i<ListOfProduct.size(); i++)
	{
		std::cout<<"1. ";
		ListOfProduct[i]->show();
	}
	return;
}
