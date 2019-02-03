/*
* @Author: yufeng
* @Date:   2018-10-11 23:30:55
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:31:10
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int len=rotateArray.size();
        if(len==0) {
            return 0;
        }
        int star=0,end=len-1;
        int mid=star;
        while(rotateArray[star]>=rotateArray[end]) {
            if(end-star==1) {
                mid=end;
                break;
            }
            mid=(star+end)>>1;
            if(rotateArray[mid]>rotateArray[end]) {
                star=mid;
            } else if(rotateArray[mid]<rotateArray[star]) {
                end=mid;
            }
        }
        return rotateArray[mid];
    }
};



class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.size()==0) {
            return 0;
        }
        int minNum = rotateArray[0];
        for(auto x:rotateArray) {
            if(x<minNum) {
                minNum = x;
            }
        }
        return minNum;
    }
};