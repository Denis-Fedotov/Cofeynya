#include <iostream>
#include <string>
#include "Alcohol.h"

void Alcohol::fillRecord()
{
	char Beer='a';
	std::cout << "Enter alochol name"<< "/n";
	std::cin >> name; std::cout <<"/n";
	std::cout << "Is it a beer? (y/n)"; std::cout <<"/n";
	std::cin >> Beer; std::cout <<"/n";
	if (Beer!='y'){
		isBeer=false;
		std::cout << "Enter alochol code"<< "/n";
		std::cin >> code; std::cout <<"/n";
	}
	else
		isBeer=true;
	std::cout << "Alcohol added!"<< "/n";
	return;
}
void Alcohol::show()
{
	std::cout<< "Name: "<<name<<"/n" << "Beer: ";
	if (isBeer)
		std::cout<< "y" <<"/n"<< "Code: "<<"--"<<"/n";
	else
		std::cout<< "n" <<"/n"<< "Code: "<<code<<"/n";
	return;
}