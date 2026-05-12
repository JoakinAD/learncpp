#include <iostream>

int main()
{
	int width; // define a variable named width
	width = 5; // copy assignment of value 5 into variable width

	std::cout << width; // prints 5

    std::cout << "\n"; 

	width = 7; // change value stored in variable width to 7

	std::cout << width; // prints 7

    std::cout << "\n";

	return 0;
}