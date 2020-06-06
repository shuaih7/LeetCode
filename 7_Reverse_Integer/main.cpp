#include <iostream>
#include <windows.h>
#include <bits/stdc++.h> 
#include "Solution.h"

using namespace std;

int main()
{
	Solution s;
	LARGE_INTEGER tm_begin, tm_end, freq;
	QueryPerformanceFrequency(&freq);
	
	int x = INT_MAX/10*10 + 1;
	
	QueryPerformanceCounter(&tm_begin); 
	
	int result = s.reverse(x);
	
	QueryPerformanceCounter(&tm_end); 
	double op_time = double(tm_end.QuadPart - tm_begin.QuadPart) / double(freq.QuadPart) * 1000.0;
	
	cout << "Printing out the result:" << endl;
	cout << "The output value is " << result << endl;
	cout << "The operation time is " << op_time << "ms" << endl;
	
	
	return 0;
}