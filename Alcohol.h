#include <string>


#ifndef __ALCOHOL_H__
#define __ALCOHOL_H__
class Alcohol {
	private:
		std::string name;
		std::string code;
		bool isBeer;
	public:
		void fillRecord();
		void show();
};
#endif 