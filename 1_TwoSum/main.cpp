#include <iostream>
#include "TwoSum.h"
#include <vector>

int main()
{
	TwoSum TwoSumClass;
	std::vector<int> vec0 = TwoSumClass.straightForward(2);
	std::vector<int> vec1 = TwoSumClass.hashMap(3);
	std::cout << "Finished." << endl;
	return 0;
}