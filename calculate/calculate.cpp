#include "calculate.h"

float calculateTotal(float price, std::uint16_t quantity, char code)
{
	float eTax{ 1.15f };
	float cTax{ 1.1f };

	if (code == 'E')
		return price * quantity * eTax;
	else if (code == 'C')
		return price * quantity * cTax;
	else
		return price * quantity;
}