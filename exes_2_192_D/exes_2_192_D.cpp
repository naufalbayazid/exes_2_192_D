#include <iostream>
using namespace std;


int   binarysearch(int naufal, int n) {
	int lowerbound = 0;

	int upperbound = n - 1;

	while (lowerbound <=upperbound) {
		int mid = (lowerbound + upperbound) /2

			if (naufal[mid] == n) {
				return mid;
			}
			else if (n < naufal[mid]) {
				upperbound = mid - 1;
			}

