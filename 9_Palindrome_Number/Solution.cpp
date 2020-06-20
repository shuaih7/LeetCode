#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
#include "Solution.h"

using namespace std;

Solution::Solution()
{
	
}

Solution::~Solution()
{
	
}

bool Solution::isPalindrome(int x)
{
	if (x < 0) return false;
	else if (x/10 == 0) return true;
	
	vector<int> container;
	while (x/10 != 0){
		container.push_back(x%10);
		x /= 10;
	}
	container.push_back(x);
	
	int num = container.size();
	for (int i=0; i<=num/2; i++){
		if (container[i] != container[num-i-1]) return false;
	}

	return true;
}

// Standard solution
bool Solution::isPalindromeSln(int x)
{
	if (x >= 0 && x/10 == 0) return true;
    else if (x < 0 || x%10 == 0) return false;
	
	int reverse = 0;
	while (reverse < x){
		reverse = reverse*10 + x%10;
		x /= 10;
	}
	
	return reverse == x || x == reverse/10;
}

// Directly reverse the integer
bool Solution::isPalindromeFast(int x)
{
	bool ans = false;
	if(x<0){
		return ans;
	}
	
	int ch=x,y=0;
	while(x){
		if(INT_MAX/10 < y){return ans;}
		
		y = (y*10)+(x%10);
		x = x/10;
	}
	
	if(ch==y){
		ans=true;
		return ans;
	}else{
		return ans;
	}
}