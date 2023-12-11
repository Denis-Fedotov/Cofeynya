#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "User.h"
#include "EmployeeList.h"

void EmployeeList::addEmployee(TypeOfUser position)
{
	User* user;
	user = new User;
	userList.push_back(user);
	user->FillEmpForm(position);
	return;
}
void EmployeeList::removeEmployee()
{
	int remp;
	showEmployees();
	std::cout << std::endl << "Choose the employee: ";
	std::cin >> remp;
	
	if(remp <= userList.size() && remp > 0)
	{
		delete userList[remp - 1];
		userList.erase(userList.begin()+(remp - 1));
	}
	return;
}
User* EmployeeList::chooseEmployee()
{
	int cemp;
	showEmployees();
	std::cout << std::endl << "Choose the employee: ";
	std::cin >> cemp;
	if(cemp < userList.size() && cemp > 0) return userList[cemp - 1];
	else return 0;
}
void EmployeeList::showEmployees()
{
	for(int i=0; i < userList.size(); i++)
	{
		std::cout << i+1 << ". ";
		userList[i] -> show();
	}
	return;
}
void EmployeeList::addToShift(User* targUser)
{
	onShift.push_back(targUser);
	return;
}
void EmployeeList::clearShift()
{
	while (!onShift.empty()) {
		onShift.pop_back();
	}
	std::cout << std::endl << "onShift List is empty";
	return;
}
bool EmployeeList::isOnShift(User* targUser)
{
	for(int i=0; i < onShift.size(); i++)
	{
		if(onShift[i] == targUser) return true;
	}
	return false;
}
User* EmployeeList::login()
{
	std::string username;
	std::string passwd;

	std::cout<<std::endl<<"Enter username:";
	std::cin >> username;
	std::cout<<std::endl<<"Enter passcode:";
	std::cin >> passwd;

	for(int i=0; i < userList.size(); i++)
	{
		if(userList[i]->CheckID(passwd, username) return userList[i];
	}

	std::cout<<std::endl<<"Incorrect username or passcode.";

	return 0;
}