#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution{
public:
	Solution();
	~Solution();
	map<int, string> intRomanMap;
	vector<string> strVector;
	
	string intToRoman(int);
private:
	void initMap(void);
};