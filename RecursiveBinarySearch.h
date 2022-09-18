#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include <string>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"



class RecursiveBinarySearch
{
public:
	bool search(std::vector<int> sortedlist, int search); 
};
#endif