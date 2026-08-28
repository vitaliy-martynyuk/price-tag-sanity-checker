#include "io/io.h"
#include <iostream>

int main()
{
	float price{ getItemPrice() };
	std::uint16_t quantity{ getQuantity() };
	char categoryCode{ getItemCategoryCode() };

	printReceipt(price, quantity, categoryCode);

	return 0;
}