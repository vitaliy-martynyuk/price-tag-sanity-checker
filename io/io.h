#ifndef IO_H
#define IO_H

#include <cstdint>
#include <cctype>

float getItemPrice();
std::uint16_t getQuantity();
char getItemCategoryCode();
void printReceipt(float price, std::uint16_t quantity, char categoryCode);

#endif
