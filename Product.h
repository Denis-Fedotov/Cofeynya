#include <string>


#ifndef __PRODUCT_H__
#define __PRODUCT_H__
class Product {
	private:
		std::string name;
		int quantity;
	public:
		void Product(std::string name);
		void changeAmount(int amount);
		void show();
};
#endif 