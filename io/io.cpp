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
	std::uint16_t input{};
	std::cin >> input;

	return input;
}

char getItemCategoryCode()
{
	std::cout << "Enter item category code: ";
	char input{};
	std::cin >> input;

	return static_cast<char>(std::toupper(static_cast<int>(input)));
}

void printReceipt(float price, std::uint16_t quantity, char categoryCode, double total)
{
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Price: " << price << '\n';
	std::cout << "Quantity: " << quantity << '\n';
	std::cout << "Code: " << categoryCode << '\n';
	std::cout << "Total: " << total << '\n';
}