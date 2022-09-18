#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include <string>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> sortedlist, int searchnum)
{
	int size = sortedlist.size();
	int mid = size/2;



		if (size == 0)
		{
			return false; 
		}
		else if ( searchnum == sortedlist.at(mid))
		{
			return true;
		}
			

		if (searchnum < sortedlist.at(mid))
		{

				while(sortedlist.size() >= mid+1)
				{
				

					sortedlist.erase(sortedlist.end()-1);

				} 

		}
		else if (searchnum > sortedlist.at(mid))
		{

				while(sortedlist.size() >= mid+1)
				{

					sortedlist.erase(sortedlist.begin());
				} 
		}

	
		return search(sortedlist, searchnum);


}