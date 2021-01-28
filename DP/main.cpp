// DP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include "dyProg.h"

using namespace std;

int main()
{
	dyProg dp;

	// LeetCode #53 - Maximum Subarray
	vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	int result = dp.maxSubArray(nums);
	cout << "The result for Leetcode #70 is " << result << endl; 

    // LeetCode #70 - Climbing Stairs
	/*int n = 15;
	int result = dp.climbStairs(n);
	cout << "The result for Leetcode #70 is " << result << endl;*/

	// LeetCode #198 - House Robbering
	/*vector<int> nums = {183,219,57,193,94,233,202,154,65};
	int result = dp.houseRobber(nums);
	cout << "The result for Leetcode #198 is " << result << endl;*/

	return 0;
}

