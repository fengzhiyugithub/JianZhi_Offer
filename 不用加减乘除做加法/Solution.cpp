/*
* @Author: yufeng
* @Date:   2018-10-12 00:00:16
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 00:00:40
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/


class Solution {
public:
    int Add(int num1, int num2)
    {
        while(num2!=0){
            int sum=num1^num2;
            num2=(num1&num2)<<1;
            num1=sum;
        }
        return num1;
    }
};


class Solution {
public:
    int Add(int num1, int num2)
    {
        return num2 ? Add(num1^num2, (num1&num2)<<1) : num1;
    }
};