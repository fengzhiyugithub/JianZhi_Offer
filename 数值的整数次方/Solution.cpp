/*
* @Author: yufeng
* @Date:   2018-10-11 23:39:34
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:40:20
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    double Power(double base, int exponent) {
        double res = 1.0;
        bool flag=1;
        if(exponent < 0 ) {
            flag=0;
            exponent = -exponent;
        }
        for(int i=0; i<exponent; i++) {
            res *= base;
        }
        return flag==1?res:1.0/res;
    }
};



class Solution {
public:
    double Power(double base, int exponent) {
        double res = 1.0;
        bool flag=1;
        if(exponent < 0 ) {
            flag=0;
            exponent = -exponent;
        }
        while(exponent != 0){
            if(exponent&1) {
                res *= base;
            }
            base *= base;
            exponent >>= 1;
        }
        return flag==1?res:1.0/res;
    }
};