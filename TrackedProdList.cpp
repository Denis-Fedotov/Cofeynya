#include <iostream>
#include <string>
#include <vector>
#include "TrackedProduct.h"
#include "TrackedProdList.h"


void TrackedProdList::getChanged(std::vector<TrackedProduct*>* targList)
{
	TrackedProduct* temp;
	for(int i=0; i<productList.size(); i++)
	{
		if(productList[i]->isEdited())
		{
			temp = new TrackedProduct((productList[i]->getName()));
			(*temp)=(*productList[i]);
			targList->push_back(temp);
		}
			
	}
	return;
}
void TrackedProdList::addProduct()
{
	std::string name;
	TrackedProduct* temp;
	std::cout<<std::endl<<"Please enter the name of the product: ";
	std::getline(std::cin, name);
	temp = new TrackedProduct(name);
	productList.push_back(temp);
	return;
}
void TrackedProdList::removeProduct()
{
	int inp;
	showProducts();
	std::cout<<std::endl<<"Please choose the product: ";
	std::cin>>inp;
	std::cin.ignore(1,'\n');
	if(inp<=productList.size())
	{
		delete productList[inp-1];
		productList.erase(productList.begin()+(inp-1));
	}
	return;
}
TrackedProduct* TrackedProdList::chooseProduct()
{
	int inp;
	showProducts();
	std::cout<<std::endl<<"Please choose the product: ";
	std::cin>>inp;
	if(inp<=productList.size()) return productList[inp-1];
	else return 0;
}
void TrackedProdList::showProducts()
{
	for(int i=0; i<productList.size(); i++)
	{
		std::cout<<i+1<<". ";
		productList[i]->show();
		std::cout<<std::endl;
	}
	return;
}
void TrackedProdList::resetTracking()
{
	for(int i=0; i<productList.size(); i++)
	{
		productList[i]->clearTracking();
	}
	return;
}
