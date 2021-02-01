#include <iostream>
#include "pch.h"
#include <vector>
#include <stack>
#include <string>
#include <windows.h>
#include "Solution.h"

using namespace std;

Solution::Solution()
{
}

Solution::~Solution()
{
}

// LeetCode #32 Maximum Valid Parentheses
// Given a string containing just the characters '(' and ')', find the length of the longest 
// valid (well-formed) parentheses substring.
int Solution::longestValidParentheses(string s)
{
	int result = 0;
	if (s.size() < 2) return result;

	vector<int> mark(s.size(), 0);
	stack<int> match;

	for (int i=0; i<s.size(); i++){
		if (s[i] == '(') match.push(i);
		else if (!match.empty()) match.pop();
		else mark[i] = 1;
	}

	while (!match.empty()) {
		int index = match.top();
		mark[index] = 1;
		match.pop();
	}

	int temp = 0;
	for (int i = 0; i < mark.size(); i++) {
		if (mark[i]) {
			temp = 0;
			continue;
		}
		else {
			temp += 1;
			result = max(temp, result);
		}
	}

	return result;
}