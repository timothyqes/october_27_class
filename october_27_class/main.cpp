#include <algorithm> //Gives access to a reverse() function.
#include <iostream>
#include <string>

std::string getUserInput()
{
	std::string userInput;
	//Mixed datatypes may not be used in arrays.

	std::cout << "Enter a string (i.e., a list of characters) " << std::endl;
	std::getline(std::cin, userInput); /*The first argument of or input is cin, the second is a 
	string.*/
	return userInput;
}

bool isPalendrome(std::string input)
{
	std::string reversedInput;
	std::string copyOfInput = input;

	//for (int...) //Another option.
	std::reverse(input.begin(), input.end()); //Requires Bidit (bi-directional iterator).

	return (copyOfInput == input);

	if (copyOfInput == input)
	{
		return true;
	}
	else
	{ 
		return false;
	}


}

int main()
{
	while (true)
	{
		std::string userInput = getUserInput();

		if (isPalendrome(userInput))
		{
			std::cout << "That is a palendrome " << std::endl;
		}
		else
		{
			std::cout << "That is not a palendrome " << std::endl;
		}
	}
}