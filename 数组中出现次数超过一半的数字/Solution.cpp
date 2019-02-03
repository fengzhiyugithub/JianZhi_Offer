/*
* @Author: yufeng
* @Date:   2018-10-11 23:54:10
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:54:32
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        map<int, int>mp;
        for(auto number: numbers){
            if(++mp[number]>numbers.size()/2){
                return number;
            }
        }
        return 0;
    }
};

class Solution {
public:
    bool flag = 0;
    bool checkMoreThanHalf(vector<int>& numbers, int num){
        int times;
        for(auto x: numbers){
            if(x == num){
                times++;
            }
        }
        return (times*2) > numbers.size();
    }
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int result=0,times=0;
        for(auto num: numbers){
            if(times == 0){
                result = num;
                times = 1;
            }
            else if(num == result){
                times++;
            }else {
                times--;
            }
        }
        flag = checkMoreThanHalf(numbers, result);
        result = flag ? result : 0;
        return result;
    }
};