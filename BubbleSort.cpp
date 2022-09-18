#include "Sort.h"
#include "BubbleSort.h"
#include <vector>

std::vector<int> BubbleSort::sort(std::vector<int> list)
{
	int k = list.size();
	int store; 

	for (int i = 0; i < k -1; i++ )
	{
		for(int j = 0; j < k-i-1; j++)
		{
			if (list.at(j) > list.at(j+1))
			{
				store = list.at(j+1);
				list.at(j+1) = list.at(j);
				list.at(j) = store;
			}
		}
	}
	return list;

}