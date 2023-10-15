#include <iostream>

int main()
{
	std::cout << "Insert a number:" << std::endl;
	int count = 1, sum = 0, i;
	std::cin >> i;
	while (count <= i)
	{
		sum += count;
		count++;
	}
	std::cout << "Sum of 1 to " << i << " = " << sum << std::endl;
}
