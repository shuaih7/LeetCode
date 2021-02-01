// Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include "Solution.h"

using namespace std;

int main()
{
	// LeetCode #32 - Longest Valid Parentheses
	string s = ")()((())";
	Solution sln;
	int result = sln.longestValidParentheses(s);
	cout << "the result is " << result << endl;

	return 0;
}
