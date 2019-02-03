/*
* @Author: yufeng
* @Date:   2018-10-11 23:25:49
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:25:58
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    void Mirror(TreeNode *pRoot) {
        if(pRoot==nullptr || pRoot->left==nullptr && pRoot->right==nullptr){
            return;
        }
        TreeNode* root=pRoot->left;
        pRoot->left=pRoot->right;
        pRoot->right=root;
        if(pRoot->left){
            Mirror(pRoot->left);
        }
        if(pRoot->right){
            Mirror(pRoot->right);
        }
    }
};