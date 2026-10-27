#include <iostream>
#include <vector> //I.e., a list of a variable type that grows and shrinks as needed.
#include <string>

//void demoPrintingAListOfGrades()
//{
//	std::vector<int> listOfGrades =
//	{
//		99,
//		75,
//		100,
//		70,
//		0,
//		46
//	};
//	
//	for (int locationInArray = 0; locationInArray < listOfGrades.size(); locationInArray++)
//	{
//		std::cout << listOfGrades[locationInArray] << ", ";
//	}
//	std::cout << std::endl;
//}

std::vector<std::string> makeToDoList()
{
	std::vector<std::string> toDoList; //An empty list at first.

	std::string continueOrNot = "no";

	while (continueOrNot != "yes")
	{
		std::cout << "Enter an item on your to-do list: " << std::endl;
		std::string newTask;
		std::getline(std::cin, newTask);

		toDoList.push_back(newTask);

		std::cout << "Are you finished adding tasks? (enter 'yes' or 'no') " << std::endl;
		std::getline(std::cin, continueOrNot); //The second input is where the cin input is stored.
	}

		return toDoList;
}

void printTheList(std::vector<std::string> theList)
{
	for (int index = 0; index < theList.size(); index++)
	{
		std::cout << "Item number " << index + 1 << " is: " << theList[index] << std::endl; /* The
		phrase after the second set of less-than symbols names the first item "one". */
	}
}

int main()
{
	auto toDoList = makeToDoList(); //No inputs for greater freedom for the user. Auto makes a string.

	printTheList;
}

//Unsigned means positive for a value.