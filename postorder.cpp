lass Solution {
    public:
        vector<int> postocrderTraversal(TreeNode* root) {
            stack<TreeNode*>st;
            stack<TreeNode*>s;
            vector<int>vec;
            if(root==NULL)
              return vec;
            st.push(root);  
            while(!st.empty())
            {
                
                s.push(st.top());
                st.pop();
                if(s.top()->left)
                  st.push(s.top()->left);
                if(s.top()->right)
                  st.push(s.top()->right);  
            }
            while(!s.empty())
            {
                vec.push_back(s.top()->val);
                s.pop();
            }
            return vec;
            
    
            
        }
    };