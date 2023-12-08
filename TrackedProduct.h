#include <string>
#include "Product.h"

#ifndef __TRACKEDPRODUCT_H__
#define __TRACKEDPRODUCT_H__
class TrackedProduct : public Product {
	private:
		int firstQuantity;
		int added;
		int consumed;
		bool edited;
	public:
		void snap();
		int getName();
		bool isEdited();
		void clearTracking();
		void show();
		void changeAmount(int amount);
};
#endif 