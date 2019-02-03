/*
* @Author: yufeng
* @Date:   2018-10-11 23:32:36
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:32:59
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    int Fibonacci(int n) {
        if(!n) {
            return 0;
        } else if(n==1 || n==2) {
            return 1;
        } else
            return Fibonacci(n-1)+Fibonacci(n-2);
    }
};


class Solution {
public:
    int Fibonacci(int n) {
        int f = 0,g = 1;/// g表示f(n+1), f表示f(n)
        while(n--) {
            g += f;
            f = g - f;
        }
        return f;
    }
};