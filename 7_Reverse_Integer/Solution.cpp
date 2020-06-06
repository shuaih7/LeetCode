#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h> 
#include "Solution.h"

using namespace std;

Solution::Solution(void)
{
	
}

Solution::~Solution(void)
{
	
}

int Solution::reverse(int x)
{
	int curVal = x;
	int result = 0; // Note: reversing the integer may cause the overflow problem
	bool is_continue = true;
	
	while (is_continue){
		if (curVal/10 == 0){
			result = result*10 + curVal % 10;
			is_continue = false;
		}
		else{
			result = result*10 + curVal % 10;
			if (result>INT_MAX/10 || (result==INT_MAX/10 && curVal%10>7)) return 0;
			if (result<INT_MIN/10 || (result==INT_MIN/10 && curVal%10<-8)) return 0;
			curVal /= 10;
		}
	}
	
	return result;
}