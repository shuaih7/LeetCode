#ifndef _SOLUTION_H_
#define _SOLUTION_H_

#include <iostream>
#include <vector>

class Solution{
public:
	Solution(void);
	~Solution(void);
	int recursion(std::vector<int>&);
	
protected:
	void print_vec(std::vector<int>&);
};

#endif