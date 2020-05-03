#include <iostream>
#include <vector>
#include "TwoSum.h"

using namespace std;

TwoSum::TwoSum()
{	
}

TwoSum::~TwoSum()
{
}

vector<int> TwoSum::straightForward(int target)
{
	vector<int> result;
	cout << "The target is " << target << endl;
	result.push_back(target);
	return result;
}

vector<int> TwoSum::hashMap(int target)
{
	vector<int> result;
	cout << "The target is " << target << endl;
	result.push_back(target);
	return result;
}
