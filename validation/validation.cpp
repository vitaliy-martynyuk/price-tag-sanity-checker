#include "validation.h"

bool isPriceValid(float price)
{
	return price > 0;
}

bool isQuantityValid(int quantity)
{
	return quantity > 0;
}

bool isItemCategoryCodeValid(char code)
{
	return code == 'P' || code == 'E' || code == 'C';
}