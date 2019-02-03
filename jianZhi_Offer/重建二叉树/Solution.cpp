/*
* @Author: yufeng
* @Date:   2018-10-11 23:24:41
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:24:54
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
#include <iostream>
#include <vector>
using namespace std;

/**
Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};
*/
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        int len=pre.size();
        if(len==0) {
            return NULL;
        }
        TreeNode* res=new TreeNode(pre[0]);
        //cout<<pre[0]<<" ";
        int k=0;
        for(int i=0; i<len; i++) {
            if(vin[i]==pre[0]){
                k=i;
                break;
            }
        }
        vector<int>lpre,rpre,lvin,rvin;
        for(int i=1; i<len; i++) {
            if(i<=k) {
                lpre.push_back(pre[i]);
            } else {
                rpre.push_back(pre[i]);
            }
        }
        for(int i=0; i<len; i++) {
            if(i==k)
                continue;
            if(i<k) {
                lvin.push_back(vin[i]);
            } else {
                rvin.push_back(vin[i]);
            }
        }
        res->left=reConstructBinaryTree(lpre,lvin);
        res->right=reConstructBinaryTree(rpre,rvin);
        return res;
    }
};
/*
int main() {
    int ppre[8]= {1,2,4,7,3,5,8,6};
    int vvin[8]= {4,7,2,1,5,3,8,6};
    vector<int>pre(ppre,ppre+8);
    vector<int>vin(vvin,vvin+8);
    Solution sol;
    sol.reConstructBinaryTree(pre,vin);
    return 0;
}*/