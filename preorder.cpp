class Solution {
    public:
        vector<int> preorderTraversal(TreeNode* root) {
            stack<TreeNode*>st;
            vector<int>vec;
            if(root==NULL)
              return vec;
             
            st.push(root);
            while(!st.empty())
            {
                TreeNode* curr=st.top();
                st.pop();
                vec.push_back(curr->val);
                if(curr->right)
                 st.push(curr->right);
                if(curr->left)
                  st.push(curr->left); 
            }
            return vec;
            
        }
    };