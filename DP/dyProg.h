#ifndef _DYPROG_H_
#define _DYPROG_H_

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

class dyProg
{
public:
	dyProg();
	~dyProg();

	int maxSubArray(vector<int>&);         // LettCode #53
	int climbStairs(int);		           // LeetCode #70
	int houseRobber(vector<int>&);         // LeetCode #198

private:

};


#endif
