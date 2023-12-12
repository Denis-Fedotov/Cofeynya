#include <string>
#include <vector>
#include "Report.h"

#ifndef __REPORTLIST_H__
#define __REPORTLIST_H__

class ReportList {
	private:
		std::vector<Report*> ListOfReports;
	public:
		void ShowReports();
		void addReport(Report* targRep);
};
#endif