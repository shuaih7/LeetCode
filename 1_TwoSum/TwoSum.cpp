#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include "TwoSum.h"

using namespace std;

TwoSum::TwoSum()
{	
}

TwoSum::~TwoSum()
{
}

vector<int> TwoSum::createVector(int length)
{
	vector<int> vec;
	for (int i=0; i<length; i++){
		vec.push_back(i);
	}
	return vec;
}

// Straight forward method, time complexity = O(n^2)
vector<int> TwoSum::straightForward(vector<int>& num, int target)
{
	vector<int> result;
	for (int i=0; i<num.size(); i++){
		int surplus = target - num[i];
		for (int j=i+1; j<num.size(); j++){
			if (surplus == num[j]){
				result.push_back(i);
				result.push_back(j);
				return result;
			}
		}
	}
	return result;
}

// Improve the algorithm by using red-black tree - time complexity = O(nlog(n))
vector<int> TwoSum::treeMap(vector<int>& num, int target)
{
	vector<int> result;
	map<int, int> tmpmap;
	
	// Initialize the red black tree
	int index = 0;
	for(vector<int>::iterator iter=num.begin(); iter!=num.end(); ++iter){
		tmpmap.insert(pair<int, int>(*iter, index));
		index++;
	}
	
	index = 0;
	for(vector<int>::iterator iter=num.begin(); iter!=num.end(); iter++){
		if(tmpmap.count(target-(*iter)) && tmpmap[target-(*iter)]!=index){
			result.push_back(index);
			result.push_back(tmpmap[target-*iter]);
			break;
		}
		index++;
	}
	
	return result;
}

// Slightly improve the treeMap() by looping once
vector<int> TwoSum::treeMapPlus(vector<int>& num, int target)
{
	vector<int> result;
	map<int, int> tmpmap;
	
	int index = 0;
	for (vector<int>::iterator iter=num.begin(); iter!=num.end(); ++iter){
		if (tmpmap.count(target-*iter)){
			result.push_back(index);
			result.push_back(tmpmap[target-*iter]);
			return result;
		}
		else{
			tmpmap.insert(std::pair<int,int>(*iter, index));
			index++;
		}
	}
	
	return result;
}

// Improve the algorithm by using Hash Map - time complexity = O(n)
vector<int> TwoSum::hashMap(vector<int>& num, int target)
{
	vector<int> result;
	unordered_map<int, int> tmpmap;
	
	// Initialize the red black tree
	int index = 0;
	for (vector<int>::iterator iter=num.begin(); iter!=num.end(); ++iter){
		if (tmpmap.count(target-*iter)){
			result.push_back(index);
			result.push_back(tmpmap[target-*iter]);
			return result;
		}
		else{
			tmpmap.insert(std::pair<int,int>(*iter, index));
			index++;
		}
	}
	
	return result;
}
