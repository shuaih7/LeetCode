#include <iostream>
#include <string>
#include <windows.h>
#include <sys/time.h>
#include "Solution.h"

using namespace std;

int main()
{
	Solution s;
	LARGE_INTEGER tm_begin, tm_end, freq;
	QueryPerformanceFrequency(&freq);
	
	string input("asdfghjklqwertyuiopzxcvbnm1234567890a");
	
	QueryPerformanceCounter(&tm_begin); 
	//string str = s.BruteForce(input);
	//string str = s.DoublePointer(input);  // Operation time: 0.0446 ms
	string str = s.HashMap(input);  		// Operation time: 0.0169 ms

	QueryPerformanceCounter(&tm_end); 
	double op_time = double(tm_end.QuadPart - tm_begin.QuadPart) / double(freq.QuadPart) * 1000.0;
	
	cout << "Printing out the result:" << endl;
	cout << "The output string is " << str << endl;
	cout << "The operation time is " << op_time << "ms" << endl;

	return 0;
}