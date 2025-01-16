#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	std::srand(time(nullptr));

	bool guessedNum = false;
	int input;
	int number = rand() % 100 + 1;
	int count = 0;

	std::cout << "Guess the Number Game:" << std::endl;
	std::cout << "*--------------------*" << std::endl;

	while (!guessedNum)
	{
		std::cout << "Please Insert a number to guess the number chosen by the computer:" << std::endl;
		std::cin >> input;

		if (input < 1 || input > 100)
		{
			std::cout << "You must select an integer number between 1 and 100" << std::endl;
			count++;
			continue;
		}

		if (input < number)
		{
			std::cout << "Your guess is too low!" << std::endl;
		}
		else if (input > number)
		{
			std::cout << "Your guess is too high!" << std::endl;
		}
		else
		{
			std::cout << "Congratulations! You guessed the number in " << count << "! Thanks for playing" << std::endl;
			guessedNum = true;
		}
		count++;
	}
	return 0;
}