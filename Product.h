#include <string>


#ifndef __PRODUCT_H__
#define __PRODUCT_H__
class Product {
	protected:
		std::string name;
		int quantity;
	public:
		Product(std::string prodName);
		void changeAmount(int amount);
		void show();
};
#endif 