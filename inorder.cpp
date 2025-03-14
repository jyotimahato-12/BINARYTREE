class Solution {
    public:
        vector<int> inorderTraversal(TreeNode* root) {
          
          stack<TreeNode*>st;
          vector<int>vec;
          
          
           while(true) 
           {
             if(root)
            {
                st.push(root);
                root=root->left;
            }
            
            
            else
            {
               if(st.empty())
               {
                break;
               }
                
    
                   vec.push_back(st.top()->val);
                   root=st.top()->right;
                   st.pop();
                
            }
           }
           return vec;
        }
    };