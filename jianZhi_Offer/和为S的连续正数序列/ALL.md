[题目链接](https://www.nowcoder.com/practice/c451a3fd84b64cb19485dad758a55ebe?tpId=13&tqId=11194&tPage=3&rp=3&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking)

## 题目描述

小明很喜欢数学,有一天他在做数学作业时,要求计算出9~16的和,他马上就写出了正确答案是100。但是他并不满足于此,他在想究竟有多少种连续的正数序列的和为100(至少包括两个数)。没多久,他就得到另一组连续正数和为100的序列:18,19,20,21,22。现在把问题交给你,你能不能也很快的找出所有和为S的连续正数序列? Good Luck!

## 输出描述:

```
输出所有和为S的连续正数序列。序列内按照从小至大的顺序，序列间按照开始数字从小到大的顺序
```

```c++
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

```

