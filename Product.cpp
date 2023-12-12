#include <iostream>
#include <string>
#include "Product.h"


Product::Product(std::string prodName)
{
	name=prodName;
	quantity=0;
	return;
}
void Product::changeAmount(int amount)
{
	quantity=quantity+amount;
	return;
}
void Product::show()
{
	std::cout<<"Name of product "<<name<<"\n";
	std::cout<<"Quantity of product "<<quantity<<"\n";
	return;
}
