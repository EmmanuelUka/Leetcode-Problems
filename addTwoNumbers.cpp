#include <iostream>
using namespace std;

/*You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {} 
    ListNode(int x) : val(x), next(nullptr) {} 
    ListNode(int x, ListNode *next) : val(x), next(next) {} 
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode list;  
        ListNode*curr = &list; 

        int carry =0;
        int sum =0;
        int x;
        int y;

        while( l1 != nullptr || l2 != nullptr || carry !=0){
            if(l1 == nullptr){
                x =0;
            }else{
                x = l1->val;
            }
            if(l2 == nullptr){
                y = 0;
            }else{
                y = l2->val;
            }

            sum = x + y + carry;
            carry = sum/10; 
            curr->next = new ListNode(sum%10);
            curr=curr->next;

            if(l1 != nullptr){
                l1 = l1->next;
            }
            if(l2 != nullptr){
                l2 = l2->next;
            }
        }
        return list.next;
    }
};


int main(){
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(8);
    l1->next->next = new ListNode(5);

    ListNode* l2 = new ListNode(9);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(6);

    Solution add;
    ListNode* result = add.addTwoNumbers(l1, l2);

    while(l1 != nullptr){
        cout<<l1->val<<"->";
        l1 = l1->next;
    }
    cout<<endl;

     while(l2 != nullptr){
        cout<<l2->val<<"->";
        l2 = l2->next;
    }
    cout<<endl;


    while (result != nullptr){
        cout << result->val;
        result = result->next;
    }
    cout<<endl;

}