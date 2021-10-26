/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp;
        temp = l1;
        vector<int> num1,num2;
        while(true)
        {
            num1.push_back(temp->val);
            if(temp->next == nullptr){break;}
            temp = temp->next;
        }
        temp = l2;
        while(true)
        {
            num2.push_back(temp->val);
            if(temp->next == nullptr){break;}
            temp = temp->next;
        }
    
        //Addition process
        int n1,n,m;
        n = num1.size();
        m = num2.size();
        if(n>m){n1 = num1.size();}
        else{n1 = num2.size();}
        
        int sum = 0,carry = 0;
        ListNode* result = new ListNode();
        temp = result;
        for(int i=0;i<n1;i++)
        {
            if(i>=n)
            {
                sum = num2.at(i) + carry;
            }
            else if(i>=m)
            {
                sum = num1.at(i) + carry;
            }
            else{
                sum = num1.at(i) + num2.at(i) + carry;
            }
            
            carry = sum/10;
            sum = sum%10;
            
            temp->next = new ListNode(sum);
            temp = temp->next;
        }
        if(carry!=0)
        {
            temp->next = new ListNode(carry);
            temp = temp->next;
        }
        result = result->next;
        return result;
    }
};
