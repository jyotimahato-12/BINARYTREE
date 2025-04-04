class Solution {
    public:
        vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
           map<TreeNode*,TreeNode*>m;
           int key=0;
         
           queue<TreeNode*>q;
           q.push(root);
           vector<int>vec;
           
           while(!q.empty())//BFS to store parent node
           {
              int l=q.size();
              int i=1;
              while(i<=l)
              { 
                TreeNode*node=q.front();
                
                q.pop();
                if(node->left)
                {
                  q.push(node->left);
                  m[node->left]=node;
                }
                
                if(node->right)
                { 
                    q.push(node->right);
                    m[node->right]=node;
    
                }
                i++;
              }   
            }
            queue<TreeNode*>qw;
            
         std:: unordered_set<TreeNode*>visited;
            qw.push(target);
           while(!qw.empty()) 
           {
              if(key==k)
                break;
              int l=qw.size();
              int i=1;
              
              while(i<=l)
              {
                TreeNode*n1=qw.front();
                qw.pop();
                if(n1->left&&visited.count(n1->left)==0)
                {
                    qw. push(n1->left);
                    visited.insert(n1->left);
                }
                if(n1->right&&visited.count(n1->right)==0)
                {
                    qw.push(n1->right);
                    visited.insert(n1->right);
                }
                if(m.count(n1)&&visited.count(n1)==0)
                {
                   visited.insert(n1);
                   
                   qw.push(m[n1]);
                }
                i++;
                
                  
              }
              key++;
           }  
              
            while(!qw.empty())
            {
                    vec.push_back(qw.front()->val);
                    qw.pop();
             }
               
              
              
           
           
           
           return vec;
        }
        
    
            
        
    };
    