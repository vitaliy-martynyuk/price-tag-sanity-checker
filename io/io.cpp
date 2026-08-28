#include "io.h"
#include <iostream>

float getItemPrice()
{
	std::cout << "Enter item price: ";
	float input{};
	std::cin >> input;
	//validation will go here

	return input;
}

std::uint_fast16_t getQuantity()
{
	std::cout << "Enter item quantity: ";
	int input{};
	std::cin >> input;
	//validation will go here

	return static_cast<std::uint_fast16_t>(input);
}

char getItemCategoryCode()
{
	std::cout << "Enter item category code: ";
	char input{};
	std::cin >> input;
	//validation will go here

	return input;
}

void printReceipt(double price, double quantity, char categoryCode)
{
	std::cout << price << ' ' << quantity << ' ' << categoryCode << '\n';
}