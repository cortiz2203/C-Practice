#include <iostream>
#include <string>

int main()
{
	int age;

	std::cout << "Please provide your age " << std::endl;

	std::cin >> age;

	if (age < 21)
	{
		std::cout << "Get Out" << std::endl;

	}
	else if (age > 65)
	{
		std::cout << "Go to sleep?" << std::endl;
	}
	else
	{
		std::cout << "Do you want to buy some beer?" << std::endl;
	}
	std::cout << "Have a nice day" << std::endl;
}