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
	
	vector<int> nums1 = {0,1,2,3,4,5,6,7,8,9,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41};
	vector<int> nums2 = {10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
	
	QueryPerformanceCounter(&tm_begin); 
	
	//double median = s.BruteForce(nums1, nums2);               // Operation time: 0.0106 ms
	double median = s.findMedianSortedArrays(nums1, nums2);     // Operation time: 0.0017 ms
	
	QueryPerformanceCounter(&tm_end); 
	double op_time = double(tm_end.QuadPart - tm_begin.QuadPart) / double(freq.QuadPart) * 1000.0;
	
	cout << "Printing out the result:" << endl;
	cout << "The output median is " << median << endl;
	cout << "The operation time is " << op_time << "ms" << endl;
	
	return 0;
}