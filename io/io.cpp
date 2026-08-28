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

std::uint16_t getQuantity()
{
	std::cout << "Enter item quantity: ";
	int input{};
	std::cin >> input;
	//validation will go here

	return static_cast<std::uint16_t>(input);
}

char getItemCategoryCode()
{
	std::cout << "Enter item category code: ";
	char input{};
	std::cin >> input;
	//validation will go here

	return input;
}

void printReceipt(float price, std::uint16_t quantity, char categoryCode)
{
	std::cout << price << ' ' << quantity << ' ' << categoryCode << '\n';
}