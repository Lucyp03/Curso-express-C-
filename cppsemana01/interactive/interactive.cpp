#include <iostream>

int main (int argc, char* argv[])
{
	int n;
	std::cout << "Please enter a integer number\n";
	std::cin >> n;
	if (n >= 10)
	{
		std::cout << "This number is big enough!\n";
		std::cout << "The square of " << n << " is " << n*n;
	}
	else
	{
		std::cout << "This number is too small!\n";
	}
	return 0;
}

