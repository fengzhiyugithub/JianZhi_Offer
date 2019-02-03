/*
* @Author: yufeng
* @Date:   2018-10-11 23:55:03
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:55:22
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
//struct TreeNode {
//    int val;
//    struct TreeNode *left;
//    struct TreeNode *right;
//    TreeNode(int x) :
//        val(x), left(NULL), right(NULL) {
//    }
//};
class Solution {
    bool isSubtree(TreeNode* pRootA, TreeNode* pRootB) {
        if (pRootB == NULL) return true;
        if (pRootA == NULL) return false;
        if (pRootB->val == pRootA->val) {
            return isSubtree(pRootA->left, pRootB->left) && isSubtree(pRootA->right, pRootB->right);
        } else {
            return false;
        }
    }
public:
    bool HasSubtree(TreeNode* pRootA, TreeNode* pRootB) {
        if (pRootA == NULL || pRootB == NULL) {
            return false;
        }
        return isSubtree(pRootA, pRootB) || HasSubtree(pRootA->left, pRootB) || HasSubtree(pRootA->right, pRootB);
    }
};