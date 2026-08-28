#ifndef IO_H
#define IO_H

#include <cstdint>

float getItemPrice();
std::uint_fast16_t getQuantity();
char getItemCategoryCode();
void printReceipt(double price, double quantity, char categoryCode);

#endif
