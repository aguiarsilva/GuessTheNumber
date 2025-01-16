#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	std::srand(time(nullptr));

	int input;
	int number = rand() % 100 + 1;
	int i = 0;

	std::cout << "Guess the Number Game:" << std::endl;
	std::cout << "*--------------------*" << std::endl;
	std::cout << "Please Insert a number to guess the number chosen by the computer:" << std::endl;
	std::cin >> input;
	
	while (i < 100)
	{
		if (input < 1 || input > 100)
		{
			std::cout << "You must select an integer number between 1 and 100" << std::endl;
			std::cout << "Please Insert a number to guess the number chosen by the computer:" << std::endl;
			std::cin >> input;
			i++;
		}		
		else if (input < number)
		{
			std::cout << "Your guess is too low!" << std::endl;
			std::cout << "Please Insert a number to guess the number chosen by the computer:" << std::endl;
			std::cin >> input;
			i++;
		}
			
		else if (input > number)
		{
			std::cout << "Your guess is too high!" << std::endl;
			std::cout << "Please Insert a number to guess the number chosen by the computer:" << std::endl;
			std::cin >> input;
			i++;
		}
		else
		{
			std::cout << "Congratulations! You guessed the number in " << i << "! Thanks for playing" << std::endl;
			break;
		}
			
	}
	return 0;
}