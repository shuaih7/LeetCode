#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

Solution::Solution(void)
{
	
}

Solution::~Solution(void)
{
	
}

string Solution::BruteForce(string s)
{
	string result("11");
	size_t position = s.find("la");

	if (position==s.npos)
		cout << "Not found" <<endl;
	else
		cout << "Found at " << position << endl;
	
	
	return result;
}

string Solution::DoublePointer(string s)
{
	string result, temp_res;
	int temp_len = 0, i = 0, j = 1;
	
	while(j < s.size()){
		++j; // Temperory
	}
	
	return result;
}