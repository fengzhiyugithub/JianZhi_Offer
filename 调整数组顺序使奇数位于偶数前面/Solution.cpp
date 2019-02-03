/*
* @Author: yufeng
* @Date:   2018-10-11 23:38:05
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:38:34
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int>tmp;
        for(auto x: array) {
            if((x&1)==1) {
                tmp.push_back(x);
            }
        }
        for(auto x:array) {
            if((x&1)==0) {
                tmp.push_back(x);
            }
        }
        array=tmp;
    }
};

class Solution {
public:
    void reOrderArray(vector<int> &array) {
        for(int i=0; i<array.size(); i++) {
            for(int j=array.size(); j>i; j--) {
                if((array[j]&1) && (array[j-1]&1)==0) {
                    swap(array[j],array[j-1]);
                }
            }
        }
    }
};

/**
用的STL　stable_partition 这个函数

*/
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        stable_partition(array.begin(), array.end(), [](int i){return i % 2 == 1;});
    }
};