#include <iostream>
#include <string>
#include <map>
#include "Solution.h"

using namespace std;

Solution::Solution()
{
	this->initMap();
}

Solution::~Solution()
{
	
}

void Solution::initMap(void)
{
	intRomanMap.insert(pair<int,string>(1000, "M"));
	intRomanMap.insert(pair<int,string>(500, "D"));
	intRomanMap.insert(pair<int,string>(100, "C"));
	intRomanMap.insert(pair<int,string>(50, "L"));
	intRomanMap.insert(pair<int,string>(10, "X"));
	intRomanMap.insert(pair<int,string>(5, "V"));
	intRomanMap.insert(pair<int,string>(1, "I"));
	/* // Note: The map container cannot use reverse iterator, this might be caused by the data structure -> red-black tree
	map<int,string>::iterator iter;
	for (iter=intRomanMap.begin(); iter!=intRomanMap.end(); ++iter){
		cout << iter->first << ", " << iter->second << endl; 
	}*/
}

string Solution::intToRoman(int num)
{
	string result = "";
	map<int,string>::iterator iter;
	
	while (num > 0){
		int digit = num % 10;
		string base = iter->second;
		string mid = (iter++)->second;
		
		if (num/10 > 0){
			iter++;
			cout << iter->first << endl;
			num /= 10;
			//result = ...
		}
		else num = 0;
	}
	
	return result;
}