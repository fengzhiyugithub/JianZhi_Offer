/*
* @Author: yufeng
* @Date:   2018-10-12 00:10:05
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 00:10:17
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
private:
    vector<vector<int> >res;
    vector<int>path;
public:
    void dfs(TreeNode* root, int sum){
        if(!root) return ;
        path.push_back(root->val);
        if(!root->left && !root->right && sum==root->val) {
            res.push_back(path);
            return ;
        }
        if(root->left){
            dfs(root->left, sum-root->val);
            path.pop_back();
        }
        if(root->right){
            dfs(root->right, sum-root->val);
            path.pop_back();
        }
    }
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        dfs(root, expectNumber);
        return res;
    }
};