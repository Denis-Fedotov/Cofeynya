#include <string>
#include <vector>
#include "TrackedProduct.h"


#ifndef __TRACKEDPRODLIST_H__
#define __TRACKEDPRODLIST_H__
class TrackedProdList {
	private:
		std::vector<TrackedProduct*> productList;
	public:
		void getChanged(std::vector<TrackedProduct*>* targList);
		void addProduct();
		void removeProduct();
		TrackedProduct* chooseProduct();
		void showProducts();
		void resetTracking();
};
#endif 