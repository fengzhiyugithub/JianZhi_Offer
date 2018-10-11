/*
* @Author: yufeng
* @Date:   2018-10-11 23:27:37
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:27:58
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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        queue<TreeNode*>que;
        vector<int>res;
        if(root == nullptr) {
            return res;
        }
        que.push(root);
        res.push_back(root->val);
        while(!que.empty()) {
            TreeNode* pRoot=que.front();
            que.pop();
            if(pRoot->left) {
                que.push(pRoot->left);
                res.push_back(pRoot->left->val);
            }
            if(pRoot->right) {
                que.push(pRoot->right);
                res.push_back(pRoot->right->val);
            }
        }
        return res;
    }
};