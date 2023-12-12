#include <iostream>
#include <string>
#include <vector>
#include "TrackedProdList.h"
#include "User.h"
#include "Product.h"
#include "Invoice.h"

void Invoice::show()
{
	std::cout << std::endl << "Date: " << date;
	std::cout << std::endl << "Received products (Name): " << NOG << std::endl << "Delivered products (Name): " << NOD;
	std::cout << std::endl << "Number of products: " << NumberOfProduct;
	return;
}
void Invoice::ShowWareList()
{
	for(int i=0; i<ListOfProduct.size(); i++)
	{
		std::cout << i+1 << ". ";
		ListOfProduct[i]->show();
	}
	return;
}
void Invoice::FillInvoice(User* fillingUser, TrackedProdList* pList)
{
	NOG = fillingUser->GetName();
	std::cout << std::endl << "Today's date: ";
	std::getline(std::cin, date);
	std::cout << std::endl << "Number of products: ";
	std::cin>>NumberOfProduct;
	std::cin.ignore(1,'\n');
	
	std::cout << std::endl << "Name of the supplier: ";
	std::getline(std::cin, NOD);
	std::string input="y";
	TrackedProduct* temp;
	Product* temp1;
	int inp; 
	while(input=="y")
	{
		temp = pList->chooseProduct();
		temp1 = new Product(temp->getName());
		std::cout<<std::endl<<"Please enter the amount recieved: ";
		std::cin>>inp;
		std::cin.ignore(1,'\n');
		temp1->changeAmount(inp);
		temp->changeAmount(inp);
		ListOfProduct.push_back(temp1);
		std::cout<<std::endl<<"Do you wish to add another product(y/n): ";
		std::getline(std::cin, input);
	}
	return;
}
