#include <iostream>
#include <stack>
#include <vector>
#include "Solution.h"

using namespace std;

Solution::Solution(void)
{
	
}

Solution::~Solution(void)
{
	
}

// Print out thr result
void Solution::printer(ListNode* ln)
{
	stack<int> rev_val;
	while (ln){
		rev_val.push(ln->val);
		ln = ln->next;
	}
	
	while (rev_val.size()){
		cout << rev_val.top();
		rev_val.pop();
	}
	cout << endl;
}

ListNode* Solution::createNode(int num)
{
	ListNode* node = new ListNode(0), *cur=node;
	vector<int> rev_val;
	
	while (num / 10){
		rev_val.push_back(num % 10);
		num = num / 10;
	}
	if (num % 10) rev_val.push_back(num % 10);
	
	// Using the reverse iterator looping over the digits
	for (vector<int>::iterator iter=rev_val.begin(); iter!=rev_val.end(); ++iter){
		cur->next = new ListNode(*iter);
		cur = cur->next;
	}
	
	return node->next;
}

// Function using the single linked list
ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* dummy = new ListNode, *cur = dummy;
	int carry = 0;
	
	while (l1 || l2 || carry){
		int num1 = l1? l1->val : 0;
		int num2 = l2? l2->val : 0;
		int sum = carry + num1 + num2;
		
		carry = sum / 10;
		cur->next = new ListNode(sum % 10);
		cur = cur->next;
		
		if (l1) l1 = l1->next;
		if (l2) l2 = l2->next;
	}
	
	this->printer(dummy->next);
	return dummy->next;
}