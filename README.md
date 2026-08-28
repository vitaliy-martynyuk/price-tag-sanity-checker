# Price Tag Sanity Checker

A small C++ console utility that reads raw point-of-sale data for a single
item — price, quantity, and category code — validates it, calculates the
total cost (including category-based tax), and prints a receipt.

Built as a learning project while working through
[learncpp.com](https://www.learncpp.com/), focused on fundamentals: multi-file
program structure, functions, fixed-width types, and defensive validation
using only `if`/`bool` logic (no loops, containers, or exceptions yet).

## What it does

- Prompts for an item's price, quantity, and one-letter category code
  (`P` = Produce, `E` = Electronics, `C` = Clothing)
- Validates each input against sane bounds before doing any math with it
- Applies a category-specific tax rate when calculating the total
- Prints a formatted receipt, or a clear error message and a non-zero exit
  code if any input fails validation

## Project structure

```
main.cpp                    // program entry point, orchestrates the flow                  
io/                         // reading input from the console, printing the receipt
  io.h
  io.cpp           
validation/                 // isXValid() checks for price, quantity, category code
  validation.h
  validation.cpp     
calculate/                  // total price calculation, including category tax
  calculate.h
  calculate.cpp      
```

## Building

Requires a C++20-capable compiler.

```bash
g++ -std=c++20 -Wall -Wextra -Wconversion -Wshadow -Wsign-conversion -o app \
    main.cpp io/io.cpp validation/validation.cpp calculate/calculate.cpp
```

Or open `Price Tag Sanity Checker.slnx` in Visual Studio.

## Running

```bash
./app
```

Example session:

```
Enter item price: 10
Enter item quantity: 3
Enter item category code: E
Price: 10.00
Quantity: 3
Code: E
Total: 34.50
```

## Notes

This is a work in progress, built branch-by-branch as new topics are
covered: input/output handling, then validation, then calculation. Design
decisions (type choices, validation bounds, failure handling) are made
deliberately and revisited as understanding grows — some rough edges are
intentional stopping points rather than oversights.