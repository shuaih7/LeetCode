#include <iostream>
#include <string>
#include <vector>
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
	string result("N/A");
	// Not available at this time
	return result;
}

// Using two indices looping around all of the characters in one cycle, time complexity: O(n)
string Solution::DoublePointer(string s)
{
	string result;
	size_t pos, i = 0, j = 1; // Save the return value of the string::find()
	int cur_len = 0, max_len = 0;
	
	while(j < s.size()){
		string t = s.substr(i,j-1);
		pos = t.find(s.at(j));
		
		if (pos == string::npos){
			cur_len = j - i;
			if (cur_len > max_len){
				max_len = cur_len;
				result = s.substr(i,j);
			}
			j++;
		}
		else{
			i += pos + 1;
		}
	}
	
	return result;
}

// Using hash map looping around all of the characters in one cycle, time complexity: O(n)
string Solution::HashMap(string s)
{
	string result;
	vector<int> hash(256, -1); //Use ASCII table as a hash map, which contains 256 members
	int start = 0, cur_len = 0, max_len = 0;
	
	for (int i=0; i<s.size(); i++){
		if (hash[s[i]] != -1){
			cur_len = i - start;
			if (cur_len > max_len) {
				max_len = cur_len;
				result = s.substr(start, cur_len);
			}
			start = i + 1;
		}
		hash[s[i]] = 1;
	}
	
	if (s.size()-start > max_len) result = s.substr(start, s.size()-start);
	
	return result;
}