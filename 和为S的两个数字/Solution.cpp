/*
* @Author: yufeng
* @Date:   2018-11-30 21:36:03
* @Last Modified by:   yufeng
* @Last Modified time: 2018-11-30 21:39:46
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        std::vector<int> res;
        for(auto x: array){
        	int tmp=sum-x;
        	if(find(array.begin(), array.end(), tmp)!=array.end()){
        		res.push_back(x);
        		res.push_back(tmp);
        		return res;
        	}
        }
        return res;
    }
};