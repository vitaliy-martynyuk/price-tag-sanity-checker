#include "io/io.h"
#include <iostream>

int main()
{
	double price{ getItemPrice() };
	double quantity{ getQuantity() };
	char categoryCode{ getItemCategoryCode() };

	printReceipt(price, quantity, categoryCode);

	return 0;
}