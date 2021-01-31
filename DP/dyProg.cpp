#include <iostream>
#include "pch.h"
#include <vector>
#include <string>
#include <windows.h>
#include "dyProg.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

dyProg::dyProg()
{
}

dyProg::~dyProg()
{
}

// LeetCode #53 Maximum Subarray
// Given an integer array nums, find the contiguous subarray (containing at least one number) 
// which has the largest sum and return its sum.
int dyProg::maxSubArray(vector<int>& nums)
{
	int ans = 0, maxn = INT_MIN;
	int len = nums.size();
	for (int i = 0; i < len; i++) {
		if (ans < 0) ans = 0;  //如果前面的和小0，那么重新开始求和
		ans += nums[i];
		maxn = max(maxn, ans);
	}
	return maxn;
}

 
// LeetCode #70 - Climbing Stairs
// 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
// 每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
int dyProg::climbStairs(int n)
{
	if (n < 1)
		return 0;
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;

	int result = this->climbStairs(n - 1) + this->climbStairs(n - 2);

	return result;
}


// You are a professional robber planning to rob houses along a street.
// Each house has a certain amount of money stashed, the only constraint stopping you from robbing 
// each of them is that adjacent houses have security system connected and it will automatically 
// contact the police if two adjacent houses were broken into on the same night.

// Given a list of non - negative integers representing the amount of money of each house, 
// determine the maximum amount of money you can rob tonight without alerting the police.
int dyProg::houseRobber(vector<int>& nums)
{
	if (nums.size() == 0)
		return 0;
	else if (nums.size() == 1)
		return nums[0];
	else if (nums.size() == 2)
		return max(nums[0], nums[1]);
	else if (nums.size() == 3)
		return max(nums[0] + nums[2], nums[1]);
	else {
		vector<int> arr1, arr2;
		arr1.assign(nums.begin(), nums.end() - 1);
		arr2.assign(nums.begin(), nums.end() - 2);

		return max(this->houseRobber(arr1), this->houseRobber(arr2) + nums[nums.size()-1]);
	}
}