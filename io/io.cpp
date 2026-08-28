#include "io.h"
#include "../validation/validation.h"
#include <iostream>

float getItemPrice()
{
	std::cout << "Enter item price: ";
	float input{};
	std::cin >> input;
	if (!isPriceValid(input))
		return 0;

	return input;
}

std::uint16_t getQuantity()
{
	std::cout << "Enter item quantity: ";
	int input{};
	std::cin >> input;
	if (!isQuantityValid(input))
		return 0;

	return static_cast<std::uint16_t>(input);
}

char getItemCategoryCode()
{
	std::cout << "Enter item category code: ";
	char input{};
	std::cin >> input;
	if (!isItemCategoryCodeValid(input))
		return 0;

	return input;
}

void printReceipt(float price, std::uint16_t quantity, char categoryCode)
{
	std::cout << "Price: " << price << '\n';
	std::cout << "Quantity: " << quantity << '\n';
	std::cout << "Code: " << categoryCode << '\n';
}