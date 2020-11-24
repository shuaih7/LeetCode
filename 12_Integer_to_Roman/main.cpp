#include <iostream>
#include <string>
#include <windows.h>
#include "Solution.h"

using namespace std;

int main()
{
	Solution sln;
	int num = 58;
	string result = sln.intToRoman(num);
	
	cout << "the result is " << result << endl;
	
	return 0;
}
