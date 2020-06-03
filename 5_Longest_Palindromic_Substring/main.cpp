#include <iostream>
#include <vector>
#include <windows.h>
#include "Solution.h"

using namespace std;

int main()
{	
	Solution s;
	LARGE_INTEGER tm_begin, tm_end, freq;
	QueryPerformanceFrequency(&freq);
	
	string str("Res");
	
	QueryPerformanceCounter(&tm_begin); 
	
	//string result = s.bruteForce(str);               // Operation time: 0.0106 ms
	string result = s.longestPalindrome(str);     // Operation time: 0.0017 ms
	
	QueryPerformanceCounter(&tm_end); 
	double op_time = double(tm_end.QuadPart - tm_begin.QuadPart) / double(freq.QuadPart) * 1000.0;
	
	cout << "Printing out the result:" << endl;
	cout << "The output median is " << result << endl;
	cout << "The operation time is " << op_time << "ms" << endl;
	
	return 0;
}