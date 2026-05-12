#include <iostream>

int main()
{
	int width; // define a variable named width
	width = 5; // copy assignment of value 5 into variable width

	std::cout << width << std::endl; // prints 5

	width = 7; // change value stored in variable width to 7

	std::cout << width; // prints 7

    std::cout << "\n";

    std::cout << width << " + " << width << " = 14\n";

    std::cout << "Enter a number: ";

    std::cin >> width;

    std::cout << "Your number is: " << width << "\n";

	return 0;
}