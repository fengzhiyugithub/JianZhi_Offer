/*
* @Author: yufeng
* @Date:   2018-10-12 00:09:15
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 00:09:23
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        int len=pushV.size();
        vector<int>tmp1,tmp2;
        tmp1=pushV,tmp2=popV;
        sort(tmp1.begin(),tmp1.end());
        sort(tmp2.begin(),tmp2.end());
        for(int i=0; i<len; i++) {
            if(tmp1[i]!=tmp2[i]) {
                return false;
            }
        }
        if(len<=2) {
            return true;
        }
        for(int i=1; i<len-1; i++) {
            if(popV[i]<popV[i+1]&&popV[i]<popV[i-1]&&popV[i-1]>popV[i+1]) {
                return false;
            }
        }
        return true;
    }
};