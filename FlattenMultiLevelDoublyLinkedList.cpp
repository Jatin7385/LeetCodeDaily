/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == nullptr){return head;}
        Node* temp;
        temp = head;
        
        while(temp->next != nullptr)
        {
            cout<<temp->val<<" ";
            if(temp->child != nullptr)
            {
                Node* temp1,*child;
                temp1 = temp->child;
                child = flatten(temp1);
                temp->child = nullptr;
                temp1 = child;
                temp1->prev = temp;
                while(temp1->next != nullptr)
                {
                    temp1 = temp1->next;
                }
                temp1->next = temp->next;
                temp1->next->prev = temp1;
                temp->next = child;
            }
            temp = temp->next;
        }
        cout<<temp->val<<" ";
        if(temp->child != nullptr)
        {
            Node* temp1,*child;
                temp1 = temp->child;
                child = flatten(temp1);
                temp->child = nullptr;
                temp1 = child;
                temp1->prev = temp;
                while(temp1->next != nullptr)
                {
                    temp1 = temp1->next;
                }
                temp1->next = temp->next;
                temp->next = child;
        }
        return head;
    }
};
