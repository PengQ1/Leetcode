#include<iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      int flag = 0; //if sum>10, flag = 1;
      ListNode *result = NULL;
	  ListNode **node = &result;
      int sum = 0;
      /*
      Some case must be considered:
      1, l1 = [5] l2=[5], expected: result = [0,1]
      2, l1 = [1,8] l2=[0], expected: result = [1,8]
      So the conditions for while loop should be well considered.
      */
	  while((l1!=NULL)||(l2!=NULL)||(flag==1))
	  {
        sum = flag;
        if(l1!=NULL) //If not may cause non-pointer error;
        {
            sum += l1->val;
            l1 = l1->next;
        }
            
        if(l2!=NULL)
        {
            sum+= l2->val;
            l2 = l2->next;
        }
            
	  	flag = sum/10;
	  	(*node) = new ListNode(sum % 10);
        //locate the ListNode to next
	  	node = &((*node)->next);
	  }
	  return result;      
    }
};

int main()
{
	ListNode *l1 = new ListNode(2);
	ListNode *l2 = new ListNode(4);
	ListNode *l3 = new ListNode(3);
	ListNode *l4 = new ListNode(5);
	ListNode *l5 = new ListNode(6);
	ListNode *l6 = new ListNode(4);
	l1->next = l2;
	l2->next = l3;
	l4->next = l5;
	l5->next = l6;
	Solution s;
	ListNode *l_result = s.addTwoNumbers(l1, l4);
	cout << "(2, 4, 3) add (5, 6, 4) = (";
	while(l_result != NULL)
	{
		cout << l_result->val<< " ";
		l_result = l_result->next;
	}
    cout << ")" <<endl;
}