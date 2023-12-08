#include <string>
#include <vector>
#include "TrackedProdList.h"
#include "User.h"
#include "Product.h"

#ifndef __INVOICE_H__
#define __INVOICE_H__
class Invoice {
	private:
		std::string date;
		std::string NOG;
		std::string NOD;
		int NumberOfProduct;
		std::vector<Product*> ListOfProduct;
	public:
		void show();
		void ShowWareList();
		void FillInvoice(User* fillingUser, TrackedProdList* pList);
};
#endif