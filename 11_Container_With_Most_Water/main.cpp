#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include "Solution.h"

using namespace std;

int main()
{
	LARGE_INTEGER tm_begin, tm_end, freq;
	QueryPerformanceFrequency(&freq);
	
	vector<int> input = {1,8,6,2,5,4,8,3,7}; // Input vector
	Solution sln;
	
	QueryPerformanceCounter(&tm_begin); 
	int result = sln.maxArea(input);
	QueryPerformanceCounter(&tm_end); 
	double op_time = double(tm_end.QuadPart - tm_begin.QuadPart) / double(freq.QuadPart) * 1000.0;
	
	cout << "Printing out the result:" << endl;
	cout << "The output value is " << result << endl;
	cout << "The operation time is " << op_time << "ms" << endl;
	
	return 0;
}