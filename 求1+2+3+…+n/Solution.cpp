/*
* @Author: yufeng
* @Date:   2018-10-11 23:58:29
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:59:04
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    int Sum_Solution(int n) {
        int sum=n;
        sum && (sum += Sum_Solution(n-1));
        return sum;
    }
};


class Solution {
public:
    int Sum_Solution(int n) {
        bool a[n][n+1];
        return sizeof(a)>>1;
    }
};

class Solution {
public:
    int muti(int a, int b){
        int res = 0;
        (a&1) && (res += b);
        a >>=1 ,b <<= 1;
        a && (res += muti(a, b));
        return res;
    }
    int Sum_Solution(int n) {
        return muti(n, n+1)>>1;
    }
};