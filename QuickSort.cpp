#include "Sort.h"
#include <vector>
#include "QuickSort.h"


std::vector<int> QuickSort::sort(std::vector<int> list)
{
	int check;
	std::vector<int> lesslist; 
	std::vector<int> Highlist;

	//base case
	if (list.size() <= 1)
	{
		return list;
	}


	//partition
	if (list.size() <= 3)
	{
		check = list.size()-1;
	}
	else 
	{
		check = 3;
	}



	//SPLITING LISTS	
	for (int i = 0; i < list.size(); i++)
	{

		if (i != check)
		{
			if (list.at(i) <= list.at(check))
			{
				lesslist.push_back(list.at(i));
			}
			else
			{
				Highlist.push_back(list.at(i));
			}

		}


	}


	
	lesslist = sort(lesslist);
	Highlist = sort(Highlist);
	lesslist.push_back(list.at(check));

	for (int j = 0; j < Highlist.size(); j++)
	{
		lesslist.push_back(Highlist.at(j));
	}


	return lesslist;

}