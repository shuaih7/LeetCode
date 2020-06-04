#include <iostream>
#include <algorithm> // If you wanna use std::sort, or min() max()
#include <string>
#include <vector>
#include "Solution.h"

Solution::Solution()
{
	
}

Solution::~Solution()
{
	
}

// Brute force method, whose time complexity should be O(n^2)
string Solution::longestPalindrome(string s)
{
	string result;
	int cur_length = 0;
	
	if (s.size() == 0) return "";
	else result = s.substr(0, 1); // Initialization

	// Important: Checking for whether all of the characters are equal
	// This part can be deleted but the overall LeetCode runtime will increase
	// I believe this part can accelerate the algorithm for the "all equal" special case
	if (s.size() >= 2 && s[0]==s[1]) result = s.substr(0,2);
	for (int i=1; i<s.size(); i++){
		if (s[i] != s[i-1]) break;
		else if (i==s.size()-1 && s[i]==s[i-1]) return s;
	}
	
	for (int i=1; i<s.size(); i++){
		
		if (s[i-1] == s[i+1]){
			for (int j=0; j<=i; j++){
				if (i+j < s.size() && s[i-j] == s[i+j] && 2*j+1>cur_length){
					cur_length = 2*j + 1;
					result = s.substr(i-j, cur_length);
				}
				else if (s[i-j] != s[i+j]) break;
			}
		}
		
		if (s[i] == s[i+1]){
			for (int j=0; j<=i; j++){
				if (i+j+1 < s.size() && s[i-j] == s[i+j+1] && 2*(j+1)>cur_length){
					cur_length = 2*(j + 1);
					result = s.substr(i-j, cur_length);
				}
				else if (s[i-j] != s[i+j+1]) break;
			}
		}
	}

	return result;
}



