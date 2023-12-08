#include <string>
#include <vector>
#include "Invoice.h"
#include "TrackedProdList.h"
#include "User.h"

#ifndef __REPORT_H__
#define __REPORT_H__
class Report {
	private:
		std::string NameOfCompany;
		std::string date;
		std::vector<Invoice*> ListOfInvoice;
	public:
		void FillReport();
		void AttachInvoice(User* fillingUser,  TrackedProdList* pList);
		void SeeInvoiceList();
		void show();
};
#endif