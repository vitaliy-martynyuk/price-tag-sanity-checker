#include "io.h"
#include <iostream>

double getItemPrice()
{
	std::cout << "Enter item price: ";
	double input{};
	std::cin >> input;

	return input;
}

double getQuantity()
{
	std::cout << "Enter item quantity: ";
	double input{};
	std::cin >> input;

	return input;
}

char getItemCategoryCode()
{
	std::cout << "Enter item category code: ";
	char input{};
	std::cin >> input;

	return input;
}

void printReceipt(double price, double quantity, char categoryCode)
{
	std::cout << price << ' ' << quantity << ' ' << categoryCode << '\n';
}