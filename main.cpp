#include "io/io.h"
#include "validation/validation.h"
#include "calculate/calculate.h"
#include <iostream>

int main()
{
	float price{ getItemPrice() };
	if (!isPriceValid(price)) {
		std::cout << "Price invalid!";
		return EXIT_FAILURE;
	}

	std::uint16_t quantity{ getQuantity() };
	if (!isQuantityValid(quantity)) {
		std::cout << "Quantity invalid!";
		return EXIT_FAILURE;
	}

	char categoryCode{ getItemCategoryCode() };
	if (!isItemCategoryCodeValid(categoryCode)) {
		std::cout << "Code invalid!";
		return EXIT_FAILURE;
	}

	double total{ calculateTotal(price, quantity, categoryCode) };

	printReceipt(price, quantity, categoryCode, total);

	return EXIT_SUCCESS;
}