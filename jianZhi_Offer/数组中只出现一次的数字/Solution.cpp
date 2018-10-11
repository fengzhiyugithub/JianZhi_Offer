/*
* @Author: yufeng
* @Date:   2018-10-12 00:05:56
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 00:06:10
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        if(data.size()<2) return ;
        int sum=0,index=0;
        for(int i=0; i<data.size(); i++) {
            sum^=data[i];
        }
        for(index=0; index<32; index++) {
            if((sum&(1<<index))!=0) {
                break;
            }
        }
        for(int i=0; i<data.size(); i++) {
            if((data[i]&(1<<index))!=0) {
                num1[0]^=data[i];
            } else {
                num2[0]^=data[i];
            }
        }
    }
};