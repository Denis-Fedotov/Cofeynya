#include <string>
#include <vector>
#include "User.h"

#ifndef __EMPLOYEELIST_H__
#define __EMPLOYEELIST_H__

class EmployeeList {
	private:
		std::vector<User*> userList;
		std::vector<User*> onShift;
	public:
		void addEmployee(TypeOfUser position);
		void removeEmployee();
		User* chooseEmployee();
		void showEmployees();
		void addToShift(User* targUser);
		void clearShift();
		bool isOnShift(User* targUser);
        User* login();
};
#endif
