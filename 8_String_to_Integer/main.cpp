#include <iostream>
#include <string>
#include <windows.h>
#include "Solution.h"

using namespace std;

int main()
{
	Solution s;
	LARGE_INTEGER tm_begin, tm_end, freq;
	QueryPerformanceFrequency(&freq);
	
	string str = "-2147 ppp483648";
	
	QueryPerformanceCounter(&tm_begin); 
	
	//int result = s.myAtoi(str);        // Execution time = 0.0257 ms
	int result = s.myAtoiASCII(str);     // Execution time = 0.0062 ms
	
	QueryPerformanceCounter(&tm_end); 
	double op_time = double(tm_end.QuadPart - tm_begin.QuadPart) / double(freq.QuadPart) * 1000.0;
	
	cout << "Printing out the result:" << endl;
	cout << "The output value is " << result << endl;
	cout << "The operation time is " << op_time << "ms" << endl;
	
	return 0;
}