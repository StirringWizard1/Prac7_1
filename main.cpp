#include <iostream>
#include <ctype.h>
#include "Sort.h"
#include "BubbleSort.h"
#include <string>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <sstream>

int main()
{

	std:: vector <int> test;

 	std::string input;


 	getline(std::cin, input);

    std::stringstream ss(input);

    int helper;
    while(ss >> helper)
    {
        test.push_back(helper);
    }




	QuickSort BS;

	test = BS.sort(test);



	RecursiveBinarySearch RBS;

	bool result =RBS.search(test, 1);

	if (result == true)
		{
			std:: cout << "true ";
		}
	else 
		{
			std::cout << "false ";
		}
	
	for (int i = 0; i < test.size(); i++)
	{
		std::cout << test.at(i) << " ";
	}

	std::cout << "" << std::endl;

	return 0;
}