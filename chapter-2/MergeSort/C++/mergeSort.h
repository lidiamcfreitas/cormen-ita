#ifndef __MERGESORT_H__
#define __MERGESORT_H__

#include "../VectorIO/askAndPrintVector.h"
#include <vector>

void merge(std::vector<int>& _vector, int begin, int middle, int end);
void mergeSort(std::vector<int>& _vector, int begin, int end);

#endif