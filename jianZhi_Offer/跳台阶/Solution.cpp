/*
* @Author: yufeng
* @Date:   2018-10-11 23:33:49
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:34:12
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    int jumpFloor(int number) {
        int f = 0,g = 1;/// 
        while(number--) {
            g += f;
            f = g - f;
        }
        return g;
    }
};