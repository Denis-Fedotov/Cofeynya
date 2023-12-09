#include <iostream>
#include <string>
#include "Product.h"
#include "TrackedProduct.h"


TrackedProduct::TrackedProduct(std::string prodName) : Product(prodName)
{
	firstQuantity=0;
	added=0;
	consumed=0;
	edited=false;
	return;
}
void TrackedProduct::snap()
{
	firstQuantity=quantity;
	return;
}
std::string TrackedProduct::getName()
{
	return name;
}
bool TrackedProduct::isEdited()
{
	return edited;
}
void TrackedProduct::clearTracking()
{
	firstQuantity=0;
	added=0;
	consumed=0;
	edited=false;
	return;
}
void TrackedProduct::show()
{
	std::cout<<"Name: "<<name<<"/n"<<"Quantity: "<<quantity<<"/n"<<"First quantity of the day: "<< firstQuantity<<"/n";
	std::cout<<"Added today: "<< added<<"/n"<<"Consumed today: "<< consumed<<"/n"<<"Edited: ";
	if (edited)
		std::cout<< "y";
	else
		std::cout<< "n";
	return;
}
void TrackedProduct::changeAmount(int amount)
{
	if (amount>0)
		added=added+amount;
	else
		consumed=consumed+abs(amount);
	return;
}