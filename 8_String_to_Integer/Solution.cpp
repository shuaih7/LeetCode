#include <iostream>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h> 
#include "Solution.h"

using namespace std;

Solution::Solution(void)
{
	
}

Solution::~Solution(void)
{
	
}

// Using the std::unordered_map as Hash Map
int Solution::myAtoi(string str)
{
	long long long_res = 0;
	int factor = 1;
	bool is_start = false;
	
	// Initialize all of the digit characters
	unordered_map<char, int> tmpmap;
	tmpmap.insert(std::pair<char,int>('0', 0)); // Do not use "0" in this case since the compiler will treat as constant cahr
	tmpmap.insert(std::pair<char,int>('1', 1));
	tmpmap.insert(std::pair<char,int>('2', 2));
	tmpmap.insert(std::pair<char,int>('3', 3));
	tmpmap.insert(std::pair<char,int>('4', 4));
	tmpmap.insert(std::pair<char,int>('5', 5));
	tmpmap.insert(std::pair<char,int>('6', 6));
	tmpmap.insert(std::pair<char,int>('7', 7));
	tmpmap.insert(std::pair<char,int>('8', 8));
	tmpmap.insert(std::pair<char,int>('9', 9));
	
	for (string::iterator iter=str.begin(); iter!=str.end(); ++iter){
		// Cases while not start
		if (!is_start){
			if (*iter==' ') continue;
			else if (*iter=='-'){
				factor = -1;
				is_start = true;
			}
			else if (*iter=='+') is_start = true;
			else if (tmpmap.count(*iter)){
				long_res = tmpmap[*iter];
				is_start = true;
			}
			else if (!tmpmap.count(*iter)) return 0;
		}
		// Case while started
		else{
			if (tmpmap.count(*iter)){
				long_res = 10*long_res + tmpmap[*iter];
				if (factor*long_res>INT_MAX) return INT_MAX;
				else if(factor*long_res<INT_MIN) return INT_MIN;
			}
			else break;
		}
			
	}
	
	int result = (int)(long_res * factor);
	
	return result;
}

// Using the ASCII table as Hash Map
int Solution::myAtoiASCII(string str)
{
	long long long_res = 0;
	int index = -1, factor = 1;
	bool is_start = false;
	
	for (string::iterator iter=str.begin(); iter!=str.end(); ++iter){
		index = *iter; // Cast the character into ASCII index integer
		
		// Cases while not start
		if (!is_start){
			if (index == 32) continue; // Space
			else if (index == 45){     // Minus sign
				factor = -1;
				is_start = true;
			}
			else if (index == 43) is_start = true;  // Plus sign
			else if (index>=48 && index<=57){
				long_res = index - 48;  // Mapping back to integer 0 - 9
				is_start = true;
			}
			else return 0;
		}
		// Case while started
		else{
			if (index>=48 && index<=57){
				long_res = 10*long_res + index - 48;
				if (factor*long_res>INT_MAX) return INT_MAX;
				else if(factor*long_res<INT_MIN) return INT_MIN;
			}
			else break;
		}
			
	}
	
	int result = (int)(long_res * factor);
	
	return result;
}