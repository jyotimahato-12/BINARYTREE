class Solution {
    public:
        vector<vector<int>> verticalTraversal(TreeNode* root) {
            queue<pair<TreeNode* ,pair<int,int>>>q;
            map<int,map<int,multiset<int>>>m;
            q.push({root,{0,0}});
            while(!q.empty())
            {
                auto r=q.front();
                q.pop();
                if(r.first->left!=NULL)
                  q.push({r.first->left,{r.second.first-1,r.second.second+1}});
                if(r.first->right!=NULL)
                   q.push({r.first->right,{r.second.first+1,r.second.second+1}});
               m[r.second.first] [r.second.second].insert(r.first->val);
            }
            vector<vector<int>>vec;
            for(auto p:m)
            {
                vector<int>v;
                for(auto w:p.second)
                {
                    v.insert(v.end(),w.second .begin(),w.second .end());
                }
                vec.push_back(v);
    
            }
            return vec;
            
            
            
        }
    };