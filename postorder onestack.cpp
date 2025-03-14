class Solution {
    public:
        vector<int> postorderTraversal(TreeNode* root) {
              stack<TreeNode*>st;//it is correct but i used some unecessary conditions
              vector<int>vec;
              if(root==NULL)
                return vec;
              st.push(root)   ;
              root=root->left;
              TreeNode* lastvisited=NULL;
              
              while(!st.empty())
            {
                if(root)
                {
                  st.push(root);
                  root=root->left;
                }
                else
                {
                    if(st.top()->right==NULL )
                    {   vec.push_back(st.top()->val);
                        
                        lastvisited=st.top();
                        st.pop();
                    }
                     else if(st.top()->right!=lastvisited) 
                     {
                        root=st.top()->right;
                     
                     }
                     else if(st.top()->right==lastvisited)
                      {
                          vec.push_back(st.top()->val);
                         lastvisited=st.top() ;
                          st.pop();
                      }
                         
                 }
                
              }
              return vec;
        }
    };