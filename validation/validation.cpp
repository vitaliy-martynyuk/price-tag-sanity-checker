#include "validation.h"

bool isPriceValid(float price)
{
	return price > 0 && price < 9999999;
}

bool isQuantityValid(std::uint16_t quantity)
{
	return quantity > 0 && quantity < 9999;
}

bool isItemCategoryCodeValid(char code)
{
	return code == 'P' || code == 'E' || code == 'C';
}