/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode *construct(vector<int> in,vector<int> pre,int inStart,int inEnd, int preStart, int preEnd){
	if(preEnd<preStart) return NULL;
	TreeNode *tmp= new TreeNode(pre[preStart]);
	int indx;
	for(int i=inStart;i<=inEnd;i++){
		if(in[i]==tmp->val){
			indx=i; break;
		}
	}
	tmp->left=construct(in,pre,inStart,indx-1,preStart+1,preStart-inStart+indx);
	tmp->right=construct(in,pre,indx+1,inEnd,preStart-inStart+indx+1,preEnd);
	return tmp;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return construct(inorder,preorder,0,inorder.size()-1,0,preorder.size()-1);
    }
};