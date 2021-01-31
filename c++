class Solution {
public:

    void inorder(TreeNode* root, int& ans, int low, int high) {
      if(root == NULL)
          return;
      inorder(root->left,ans,low,high);
      if(root->val >= low && root->val <= high){
        ans += root->val;
      }
      inorder(root->right,ans,low,high);
      
    }
        
   int rangeSumBST(struct TreeNode* root, int low, int high){
     int ans = 0;
   	 inorder(root,ans,low,high);
     return ans;
     
   }
};
