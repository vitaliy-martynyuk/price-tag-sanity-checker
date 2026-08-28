#include "io.h"
#include <iostream>

float getItemPrice()
{
	std::cout << "Enter item price: ";
	float input{};
	std::cin >> input;

	return input;
}

std::uint16_t getQuantity()
{
	std::cout << "Enter item quantity: ";
	int input{};
	std::cin >> input;
	if (input <= 0)
		return 0;

	return static_cast<std::uint16_t>(input);
}

char getItemCategoryCode()
{
	std::cout << "Enter item category code: ";
	char input{};
	std::cin >> input;

	return static_cast<char>(std::toupper(static_cast<int>(input)));
}

void printReceipt(float price, std::uint16_t quantity, char categoryCode)
{
	std::cout << "Price: " << price << '\n';
	std::cout << "Quantity: " << quantity << '\n';
	std::cout << "Code: " << categoryCode << '\n';
}