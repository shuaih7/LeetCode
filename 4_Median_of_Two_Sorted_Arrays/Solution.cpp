#include <iostream>
#include <algorithm> // If you wanna use std::sort, or min() max()
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

// New method - using the given pre-knowledge that both two arrays are sorted
// Time complexity of this algorithm is O(log(m+n))
double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	double median = 0.0;
	int length = nums1.size() + nums2.size(), m = nums1.size(), n = nums2.size();
	vector<int>::iterator iter1 = nums1.begin(), iter2 = nums2.begin();
	
	if (length & true) median = (double)findKthSortedArrays((length>>1)+1, iter1, m, iter2, n); // Note: length>>1+1 equals to length>>2, please use the branket
	else median = (double)(findKthSortedArrays(length>>1, iter1, m, iter2, n) + findKthSortedArrays((length>>1)+1, iter1, m, iter2, n)) / 2.0;

	return median;
}

int Solution::findKthSortedArrays(int k, vector<int>::iterator iter1, int m, vector<int>::iterator iter2, int n)
{
	// Make sure that the length of the first array is shorter than the second one
	if (m > n) return findKthSortedArrays(k, iter2, n, iter1, m);
	
	// Consider the extreme cases:
	if (m == 0) return *(iter2 + k - 1);
	if (k == 1) return min(*iter1, *iter2);
	
	// Find out the kth value using the recursion method
	int kth = 0;
	int l1 = min(m, k>>1), l2 = k - l1;
	if (*(iter1+l1-1) == *(iter2+l2-1)) return *(iter1+l1-1);
	else if (*(iter1+l1-1) < *(iter2+l2-1)) return this->findKthSortedArrays(k-l1, iter1+l1, m-l1, iter2, n);
	else return this->findKthSortedArrays(k-l2, iter1, m, iter2+l2, n-l2);
}



