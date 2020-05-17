#pragma once

#include <iostream>
#include <string>

using namespace std;

class Solution{
public: // If not declare this, the following functions will be treated as private.
	Solution();
	~Solution();
	string BruteForce(string);
	string DoublePointer(string);
	
};