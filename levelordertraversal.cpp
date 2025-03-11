class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            queue<TreeNode*>q;
              
            vector<vector<int>>arr;
            if(root==NULL)
             return arr;
            
            q.push(root);
            while(!q.empty())
            {
                vector<int>vec;
                int size=q.size();
                for(int i=1;i<=size;i++)
                {
                   TreeNode*cur=q.front(); 
                   q.pop();
    
                    if(cur->left!=NULL)
                    {
                        q.push(cur->left);
    
                    }
                    if(cur->right!=NULL)
                    {
                        q.push(cur->right);
                    }
                    vec.push_back(cur->val);
                    
                    
                }
                arr.push_back(vec);
            }
            return arr;
            
            
    
    
    
            
        }
    };