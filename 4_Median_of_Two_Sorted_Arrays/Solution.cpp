#include <iostream>
#include <algorithm> // If you wanna use std::sort
#include <vector>
#include "Solution.h"

Solution::Solution()
{
	
}

Solution::~Solution()
{
	
}

// This brute force method using the std::sort method, which has the time complexity of O(nlog(n)).
// If that is correct, then the time complexity of this function should be O((m+n)log(m+n)),
//which is not the O(log(m+n)) as the statement declared.
double Solution::BruteForce(vector<int>& num1, vector<int>& num2)
{
	vector<int>& nums = num1; // The reference must be initialized once declared, and must be declared before the if statement.
	if (num1.size() > num2.size()){
		num1.insert(num1.end(), num2.begin(), num2.end());
	}
	else{
		num2.insert(num2.end(), num1.begin(), num1.end());
		vector<int>& nums = num2;
	}
	std::sort(nums.begin(), nums.end()); // Time complexity of sort is O(nlog(n))
	
	if (nums.size() & true) return (double)nums[nums.size() / 2];
	else return (double)(nums[nums.size() / 2] + nums[(nums.size() / 2) - 1]) / 2.0;

}