[题目链接](https://www.nowcoder.com/practice/c451a3fd84b64cb19485dad758a55ebe?tpId=13&tqId=11194&tPage=3&rp=3&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking)

## 题目描述

输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。

## 输出描述:

```
对应每个测试案例，输出两个数，小的先输出。
```

分析：

数组递增，两数和为定值时，要使两数乘积最小，所以顺序查找，第一组和为S的两个数即为所求。 时间复杂度O(nlog(n))

```c++
class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        std::vector<int> res;
        for(auto x: array){
        	int tmp=sum-x;
        	if(find(array.begin(), array.end(), tmp)!=array.end()){
        		res.push_back(x);
        		res.push_back(tmp);
        		return res;
        	}
        }
        return res;
    }
};
```

