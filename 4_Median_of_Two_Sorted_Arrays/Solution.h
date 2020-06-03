#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	Solution();
	~Solution();
	double BruteForce(vector<int>&, vector<int>&);
	double findMedianSortedArrays(vector<int>&, vector<int>&);
	int findKthSortedArrays(int, vector<int>::iterator, int, vector<int>::iterator, int);
};