#include <string>
#include <vector>
#include "ShiftHandoverLog.h"


#ifndef __LOGLIST_H__
#define __LOGLIST_H__
class LogList {
	private:
		std::vector<ShiftHandoverLog*> listOfLogs;
	public:
		void showLogs();
		void addLog(ShiftHandoverLog* targLog);
};
#endif 