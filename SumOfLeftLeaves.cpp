/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> left;
    int sum = 0;
    int count = 0;
    int sumOfLeftLeaves(TreeNode* root,int type = 0) {
        //Type 1 denotes left and Type 2 denotes right
    	int f = 0;
        if(root->left!=nullptr)
        {
            cout<<root->val<<" "<<count<<" L1"<<endl;
            count++;
            sumOfLeftLeaves(root->left,1);
        }
        else if(root->left == nullptr && root->right != nullptr)
        {
	    f = 1;
            cout<<root->val<<" "<<count<<" L2"<<endl;
            count++;
            sumOfLeftLeaves(root->right,2);
        }
        else if(root->left == nullptr && root->right == nullptr && type == 1)
        {
            cout<<root->val<<" "<<count<<" L3"<<endl;
            left.push_back(root->val);//*************
            count--;
            return 0;
        }
        else if(root->left == nullptr && root->right == nullptr && type == 2)
        {
            cout<<root->val<<" "<<count<<" L4"<<endl;
            count--;
            return 0;
        }
        else if(root->left != nullptr && type == 0)
        {
            cout<<root->val<<" "<<count<<" L5"<<endl;
            count++;
            sumOfLeftLeaves(root->left,1);
        } 
        else if(root->left == nullptr && root->right==nullptr && type == 0)
        {
            cout<<root->val<<" "<<count<<" L6"<<endl;
            return 0;
        }
        
        if(root->right!=nullptr && f == 0)
        {
            cout<<root->val<<" "<<count<<" R1"<<endl;
            count++;
            sumOfLeftLeaves(root->right,2);
        }
        else if(root->right == nullptr && type!=0)
        {
            cout<<root->val<<" "<<count<<" R2"<<endl;
            count--;
            return 0;
        }
        else if(root->right != nullptr && type == 0 && f == 0)
        {
            cout<<root->val<<" "<<count<<" R3"<<endl;
            count++;
            sumOfLeftLeaves(root->right,2);
        }
        
        cout<<count<<endl;
        if(count == 0)
        {
            for(int i=0;i<left.size();i++)
            {
                cout<<left.at(i)<<" ";
                sum += left.at(i);
            }
            return sum;
        }
        count--;
        return 0;
        
    }
};
