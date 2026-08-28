#include "calculate.h"

double calculateTotal(float price, std::uint16_t quantity, char code)
{
	if (code == 'E')
		return price * quantity * 1.15;
	else if (code == 'C')
		return price * quantity * 1.1;
	else
		return price * quantity;
}