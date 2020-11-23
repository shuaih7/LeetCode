#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include "Solution.h"

using namespace std;

Solution::Solution(void)
{
	
}

Solution::~Solution(void)
{
	
}

int Solution::maxArea(vector<int>& height)
{	
	int result = -1, value = 0, length = height.size();
	int left = 0, right = length - 1;
	
	while (left != right) {
		value = (right - left) * min(height[right], height[left]);
		if (value > result) result = value;
		if (height[left] > height[right])
			right--;
		else
			left++;
	}
	
	return result;
}