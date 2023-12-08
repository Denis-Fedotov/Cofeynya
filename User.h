#include <string>

#ifndef __USER_H__
#define __USER_H__
enum TypeOfUser {manager, barman, baker};
class User {
	private:
		std::string name;
		std::string surname;
		TypeOfUser type;
		std::string UserID;
		std::string username;
	public:
		void FillEmpForm(TypeOfUser position);
		std::string GetName();
		std::string GetSurname();
		bool CheckID(std::string code, std::string username);
		bool CheckAccess(TypeOfUser position);
};
#endif