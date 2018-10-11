/*
* @Author: yufeng
* @Date:   2018-10-11 23:41:49
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:42:32
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/


class Solution {
public:
    int  NumberOf1(int n) {
        int res = 0 ;
        while(n != 0){
            res++;
            n -= (n&(-n));
        }
        return res;
    }
};

class Solution {
public:
    int  NumberOf1(int n) {
        int res = 0 ;
        unsigned int x=n;
        while(x != 0) {
            if((x&1)==1) {
                res++;
            }
            x=x>>1;
//            n -= (n&(-n));
        }
        return res;
    }
};

class Solution {
public:
    int  NumberOf1(int n) {
        return bitset<32>(n).count();
    }
};