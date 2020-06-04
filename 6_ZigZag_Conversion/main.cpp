#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

int main()
{
	Solution s;
	string str = "Res";
	int numRows = 1;
	
	string result = s.convert(str, numRows);
	
	cout << "Success." << endl;
	
	return 0;
}