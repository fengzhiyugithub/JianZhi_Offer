/*
* @Author: yufeng
* @Date:   2018-10-11 23:35:30
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:35:51
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
    int TreeDepth(TreeNode* pRoot) {
        if(pRoot == nullptr) return 0;
        return max(TreeDepth(pRoot->left),TreeDepth(pRoot->right))+1;
    }
};