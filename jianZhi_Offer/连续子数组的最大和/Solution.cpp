/*
* @Author: yufeng
* @Date:   2018-10-11 23:51:00
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:51:35
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        if(array.empty()) {
            return 0;
        }
        int curSum=0;///从某个位置到当前位置为止保存的最大值
        int maxSum=INT_MIN;///从开始到当前位置的连续子数组的最大值
        for(auto x: array) {
            if(curSum<=0) {
                ///到当前位置，如果curSum为负数，无论正负，加上当前元素，curSum都比当前元素小
                curSum=x;
            } else {///如果x为正，curSum会变大，下一步会保存在maxSum中；如果为负，在上一次循环中已经保存过了
                curSum+=x;
            }
            if(curSum>maxSum) {
                maxSum=curSum;
            }
        }
        return maxSum;
    }
};

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int res = array[0];///记录当前所有子数组的和的最大值
        int maxx = array[0];///包含array[i]的连续数组最大值
        for(int i=1; i<array.size(); i++) {
            maxx=max(maxx+array[i],array[i]);
            res=max(res,maxx);
        }
        return res;
    }
};