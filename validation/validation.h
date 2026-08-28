#ifndef VALIDATION_H
#define VALIDATION_H

#include <cstdint>

bool isPriceValid(float price);
bool isQuantityValid(std::uint16_t quantity);
bool isItemCategoryCodeValid(char code);

#endif
