class Solution {
    public:
        int widthOfBinaryTree(TreeNode* root) {
          
          long long lr=0;
          if(root==NULL)
            return 0;
         queue<pair<TreeNode*,long long>>q;
         q.push({root,1});
         while(!q.empty())
         {
            long long l=q.size();
            long long low=q.front().second;
            long long high=q.back().second;
            long long dif=high-low;
            if(dif>lr)
              lr=high-low;
            for(int i=1;i<=l;i++)
            {
               auto node=q.front();
                q.pop();
                long long t=node.second-low;
                if(node.first->left)
                 q.push({node.first->left,2*t});
                if(node.first->right) 
                  q.push({node.first->right,2*t+1});
            }
         }
        
     
      
       
         return lr+1;
            
           
        
            
                   
        
              
                
              
            
            
        
            
          
              
             
                
       
             
             
            
                
            
            
          
            
            
           
          
              
    
             
               
           
             
             
             
                
           
             
              
               
              
             
              
              
        
              
              
                
              
         
            
            
        
          
    
      
    
    
    
          
               
            
    
            
            
            
    
    
          
        }
    };