#include <iostream>
#include <vector>
#include <algorithm>
#include "Solution.h"

using namespace std;

Solution::Solution(void)
{
	
}

Solution::~Solution(void)
{
	
}

// Function for cpp recursion test
int Solution::recursion(vector<int>& input, int summation=0)
{
	if (input.size() > 2){
		int index = input.size() / 2;
		vector<int> first, second;
		
		first.assign(input.begin(), input.begin()+index);
		second.assign(input.begin()+index, input.end());
	}
	else{
		if (input.size() == 1)
			summation += input[0];
		else
			summation = summation + input[0] + input[1];
		return summation;
	}
}

int Solution::divide_and_merge(vector<int>& input1, vector<int>& input2)
{
	
}


void Solution::print_vec(vector<int>& vec)
{
	for (vector<int>::iterator iter=vec.begin(); iter!=vec.end(); iter++){
		cout << *iter << ", ";
	}
	cout << endl;
}
	