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
    vector<int> sum;
    int count = 0;
    int sum1 = 0;
    int sumNumbers(TreeNode* root,string uptilnow = "") {
        int val = root->val;
        char c = '0' + val;
        uptilnow += c;
        
        if(root->left == nullptr && root->right == nullptr && count == 0)
        {
            return stoi(uptilnow);
        }
        if(root->left==nullptr && root->right==nullptr)
        {
            sum.push_back(stoi(uptilnow));//********
            count--;
            return 0;
        }
        if(root->left!=nullptr){
            count++;
            sumNumbers(root->left,uptilnow);
        }
        else if(root->left == nullptr && count != 0)
        {
            if(root->right == nullptr){
            count--;
            sum.push_back(stoi(uptilnow));
            return 0;
            }
        }
        if(root->right!=nullptr){
            count++;
            sumNumbers(root->right,uptilnow);
        }
        else if(root->right == nullptr && root->left == nullptr && count != 0){
            count--;
            sum.push_back(stoi(uptilnow));
            return 0;
        }
        if(count <= 0)
        {
            for(int i=0;i<sum.size();i++)
            {
                cout<<sum.at(i)<<endl;
                sum1 += sum.at(i);
            }
        }
        count--;
        return sum1;
    }
};
