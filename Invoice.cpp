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
		std::cout << i << ". ";
		ListOfProduct[i]->show();
	}
	return;
}
void Invoice::FillInvoice(User* fillingUser, TrackedProdList* pList)
{
	NOG = fillingUser->GetName();
	std::cout << std::endl << "Today's date: ";
	std::cin >> date;
	
	std::string input="y";
	TrackedProduct* temp;
	Product* temp1;
	int inp; 
	while(input=="y")
	{
		std::cout<<"Please choose the product: ";
		temp = pList->chooseProduct();
		temp1 = new Product(temp->getName());
		std::cout<<std::endl<<"Please enter the amount recieved: ";
		std::cin>>inp;
		temp1-=>changeAmount(inp);
		ListOfProduct.push_back(temp1);
		std::cout<<std::endl<<"Do you wish to add another product(y/n): ";
		std::cin>>input;
	}
	return;
}
