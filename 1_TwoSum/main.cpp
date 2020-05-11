#include <iostream>
#include "TwoSum.h"
#include <vector>
#include <windows.h>
#include <sys/time.h>

using namespace std;

int main()
{
	TwoSum TS;
	LARGE_INTEGER tm_begin, tm_end, freq;
	QueryPerformanceFrequency(&freq);
	
	int length = 100000;
	int target = length - 1 + length - 2;
	vector<int> num = TS.createVector(length);
	
	QueryPerformanceCounter(&tm_begin); 
	
	//vector<int> result = TS.straightForward(num, target);  //--- 19.1032s for straight forward method 
	//vector<int> result = TS.treeMap(num, target);          //--- 0.1153s  for using red black tree
	//vector<int> result = TS.treeMapPlus(num, target);      //--- 0.1104s  for using modified red black tree
	vector<int> result = TS.hashMap(num, target);            //--- 0.0455s  for using hash map
	
	QueryPerformanceCounter(&tm_end);
	double op_time = double(tm_end.QuadPart - tm_begin.QuadPart) / double(freq.QuadPart);

	cout << "Printing out the result:" << endl;
	cout << "The number of elements is " << result.size() << endl;
	for (vector<int>::iterator it=result.begin(); it!=result.end(); ++it)
		cout << *it << endl;
	cout << "The operation time is " << op_time << " second(s)" << endl;
	return 0;
}