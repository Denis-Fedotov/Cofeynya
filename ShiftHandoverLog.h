#include <string>
#include <vector>
#include "TrackedProdList.h"
#include "User.h"
#include "Alcohol.h"

#ifndef __SHIFTHANDOVERLOG_H__
#define __SHIFTHANDOVERLOG_H__
class ShiftHandoverLog {
	private:
		std::string NameOfBarman;
		std::string Date;
		std::vector<TrackedProduct*> ListOfProduct;
		std::vector<Alcohol*> listOfAlcohol;
	public:
		void ShowAlcoholList();
		void FillLog(User* fillingUser, TrackedProdList* pList);
		void OpenAlcohol();
		void Show();
		void showProductList();
};
#endif