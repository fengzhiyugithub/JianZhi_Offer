/*
* @Author: yufeng
* @Date:   2018-10-11 23:28:29
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:29:06
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if(sequence.empty()) {
            return false;
        }
        int len=sequence.size();
        ///在二叉搜索树中查找小于根节点的左子节点
        vector<int>leftSequence;
        int i=0;
        while(i<len-1) {
            if(sequence[i]<sequence[len-1]) {
                leftSequence.push_back(sequence[i]);
            } else {
                break;
            }
            i++;
        }
        ///在二叉搜索树中查找大于根节点的右子节点
        vector<int>rightSequence;
        int j=i;
        while(j<len-1) {
            if(sequence[j]>sequence[len-1]) {
                rightSequence.push_back(sequence[j]);
            } else {
                return false;
            }
            j++;
        }
        /// 判断左子树是否为二叉搜索树
        bool left=true;
        if(i>0) {
            left = VerifySquenceOfBST(leftSequence);
        }
        ///判断右子树是否为二叉搜索树
        bool right=true;
        if(i<len-1) {
            right = VerifySquenceOfBST(rightSequence);
        }
        return left&&right;
    }
};



class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if(sequence.empty()) {
            return false;
        }
        int len=sequence.size()-1;
        for(int i=0; len; i=0,len--) {
            while(sequence[i++] < sequence[len]);
            while(sequence[i++] > sequence[len]);
            if(i < len)
                return false;
        }
        return true;
    }
};