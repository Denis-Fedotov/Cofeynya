#include <iostream>
#include <string>
#include "User.h"

void User::FillEmpForm(TypeOfUser position)
{
	type=position;
	std::cout << std::endl << "Enter new name: ";
	std::getline(std::cin, name);
	std::cout << std::endl << "Enter new surname: ";
	std::getline(std::cin, surname);
	std::cout << std::endl << "Enter username: ";
	std::getline(std::cin, username);
	std::cout << std::endl << "Enter password: ";
	std::getline(std::cin, UserID);
	std::cout << std::endl << "Form filled.";
	return;
}
std::string User::GetName()
{
	return name;
}
std::string User::GetSurname()
{
	return surname;
}
bool User::CheckID(std::string code, std::string usrname)
{
	if(code == UserID && username == usrname) 
		return true;
	else
		return false;
}
bool User::CheckAccess(TypeOfUser position)
{
	if(type == manager && position == manager) 
		return true;
	else if(type == barman && position == barman) 
		return true;
	else if(type == barman && position == baker) 
		return true;
	else if(type == baker && position == baker) 
		return true;
	else 
		return false;
}