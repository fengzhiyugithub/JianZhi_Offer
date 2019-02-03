/*
* @Author: yufeng
* @Date:   2018-11-30 22:00:03
* @Last Modified by:   yufeng
* @Last Modified time: 2018-11-30 22:09:36
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    vector<int> save(int l,int r){
        vector<int>v;
        for(int i=l; i<=r; i++){
            v.push_back(i);
        }
        return v;
    }
    vector<vector<int> > findCtnsSqnc(int sum){
        vector<vector<int> >res;
        if(sum<3) return res;
        int small=1,big=2;
        int mid=(sum+1)>>1,curSum=small+big;
        while(small<mid){
            if(curSum==sum){
                res.push_back(save(small,big));
            }
            while(curSum>sum && small<mid){
                curSum-=small;
                small++;
                if(curSum==sum){
                    res.push_back(save(small,big));
                }
            }
            big++;
            curSum+=big;
        }
        return res;
    }
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int> >res;
        res=findCtnsSqnc(sum);
        return res;
    }
};
