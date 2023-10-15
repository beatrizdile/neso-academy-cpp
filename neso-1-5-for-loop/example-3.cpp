#include <iostream>

int main()
{
	std::cout << "Insert a number: " << std::endl;
	int sum = 0, num;
	std::cin >> num;
	for (int i=1; i<=num; i++)
		sum += i;
	std::cout << "Sum of 1 to " << num << " = " << sum << std::endl;
	return 0;
}
