#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Solution.h"

using namespace std;

Solution::Solution()
{
	
}

Solution::~Solution()
{
	
}

// Straight forward method, time complexity O(n)
string Solution::convert(string s, int numRows)
{
	string result("");
	vector<string> strRows(numRows, result); // Note: s.size() returns the type "unsigned int"
	int direction = 1, unit = 2 * numRows - 2, curRow = 0;
	if (numRows == 1) return s; // Hnadling the spectial case
	
	for (int i=0; i<s.size(); i++){
		
		if (curRow < 0) {
			direction = 1;
			curRow = 1;
		}
		else if (curRow == numRows){
			direction = -1;
			curRow -= 2;
		}
			
		strRows[curRow].push_back(s[i]);
		curRow += direction;
	}
	
	for (int i=0; i<numRows; i++) result.append(strRows[i]);
	
	return result;
}