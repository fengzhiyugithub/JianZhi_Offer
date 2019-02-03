/*
* @Author: yufeng
* @Date:   2018-10-11 23:52:11
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:52:37
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int>res;
        if(k > input.size()){
            return res;
        }
        sort(input.begin(), input.end());
        for(int i=0;i<k;i++){
            res.push_back(input[i]);
        }
        return res;
    }
};

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        priority_queue<int>pq;
        vector<int>res;
        if(k > input.size() || k <= 0) {///这里注意判断k<=0,否则后面for死循环
            return res;
        }
        for(auto x: input) {
            if(pq.size()<k) {
                pq.push(x);
            } else if(x<pq.top()) {
                pq.pop();
                pq.push(x);
            }
        }
        while(!pq.empty()) {
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
    }
};