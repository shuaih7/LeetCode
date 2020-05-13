#include <iostream>
#include <vector>

using namespace std;

class TwoSum{
public:
	TwoSum();
	~TwoSum();
	
	vector<int> createVector(int);
	vector<int> straightForward(vector<int>&, int);
	vector<int> treeMap(vector<int>&, int);
	vector<int> treeMapPlus(vector<int>&, int);
	vector<int> hashMap(vector<int>&, int);
	
};