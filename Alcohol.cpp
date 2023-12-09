#include <iostream>
#include <string>
#include "Alcohol.h"

void Alcohol::fillRecord()
{
	std::string Beer="a";
	std::cout << "Enter alochol name"<< "/n";
	std::cin >> name; std::cout <<"/n";
	std::cout << "Is it a beer? (y/n)"; std::cout <<"/n";
	while (Beer!="y" || Beer!="n"){
	std::cin >> Beer; std::cout <<"/n";
	if (Beer=="n"){
		isBeer=false;
		std::cout << "Enter alochol code"<< "/n";
		std::cin >> code; std::cout <<"/n";
	}
	else if (Beer=="y")
		isBeer=true;
	else
		std::cout <<"Please reenter input";
	}
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