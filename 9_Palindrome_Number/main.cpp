#include <iostream>
#include <windows.h>
#include "Solution.h"

using namespace std;

int main()
{
	Solution s;
	LARGE_INTEGER tm_begin, tm_end, freq;
	QueryPerformanceFrequency(&freq);
	
	int x = 2123212;
	
	QueryPerformanceCounter(&tm_begin); 
	
	//bool result = s.isPalindrome(x);      // Execetion time = 0.0026 ms
	//bool result = s.isPalindromeSln(x);   // Execetion time = 0.0002 ms
	bool result = s.isPalindromeFast(x);    // Execetion time = 0.0001 ms
	
	QueryPerformanceCounter(&tm_end); 
	
	double op_time = double(tm_end.QuadPart - tm_begin.QuadPart) / double(freq.QuadPart) * 1000.0;
	
	cout << "Printing out the result:" << endl;
	if (result) cout << "This integer is palindrome!" << endl;
	else cout << "This integer is not palindrome!" << endl;
	cout << "The operation time is " << op_time << "ms" << endl;
	
	return 0;
}