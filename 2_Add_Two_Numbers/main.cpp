#include <iostream>
//#include <windows.h>
#include "Solution.h"

using namespace std;

int main()
{
	Solution s;
	ListNode* l1 = s.createNode(7281);
	ListNode* l2 = s.createNode(4021);
	s.printer(l1);
	s.printer(l2);
	s.addTwoNumbers(l1, l2);
	
	return 0;
}