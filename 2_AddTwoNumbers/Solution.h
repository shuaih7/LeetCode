#include <iostream>

struct ListNode{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution
{
public: // If not declare this, the following functions will be treated as private.
	Solution();
	~Solution();
	ListNode* addTwoNumbers(ListNode*, ListNode*);
};