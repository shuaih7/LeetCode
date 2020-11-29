#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
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
	
	strVector.push_back("I");
	strVector.push_back("V");
	strVector.push_back("X");
	strVector.push_back("L");
	strVector.push_back("C");
	strVector.push_back("D");
	strVector.push_back("M");
}

string Solution::intToRoman(int num)
{
	string result = "";
	vector<string>::iterator iter;
	
	int index = 0;
	while ((num+9)/10 > 0){
		int residual = num % 10;
		
		if (residual == 9){
			result = result + strVector[index+2] + strVector[index];
			index += 2;
			num /= 10;
			continue;
		}
		
		if (residual == 5){
			result += strVector[index + 1];
			index += 2;
			num /= 10;
			continue;
		}

		if (residual == 4){
			result = result + strVector[index+1] + strVector[index];
			index += 2;
			num /= 10;
			continue;
		}

		// Other cases when the residual == 0, 1, 2, 3, 6, 7, 8
		int iter_num = residual > 5? residual-5 : residual;
		for (int i=0; i<iter_num; i++)
			result += strVector[index];
		result = residual > 5? result+strVector[index+1] : result;
		index += 2;
		num /= 10;
	}
	
	
	reverse(result.begin(), result.end()); // Reverse the string, should include <algorithm> at the very beginning
	return result;
}