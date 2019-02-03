/*
* @Author: yufeng
* @Date:   2018-10-11 23:41:19
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:41:28
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    int rectCover(int number) {
        if(number<3){
            return number;
        }
        return rectCover(number-1) + rectCover(number-2);
    }
};