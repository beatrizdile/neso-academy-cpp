#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Enter any number." << std::endl;
	std::cin >> num;
	if (num > 10)
		std::cout << "This number is greater than 10.";
	else
		std::cout << "This number is less than 10.";
	
	return 0;
}
