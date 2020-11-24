#pragma once

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution{
public:
	Solution();
	~Solution();
	map<int, string> intRomanMap;
	string intToRoman(int);
private:
	void initMap(void);
};