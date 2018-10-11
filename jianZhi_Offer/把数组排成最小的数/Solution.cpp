/*
* @Author: yufeng
* @Date:   2018-10-12 00:04:22
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 00:04:33
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    static bool cmp(const string& s1,const string& s2) {
        string a=s1+s2;
        string b=s2+s1;
        return a<b;
    }
    string PrintMinNumber(vector<int> numbers) {
        string res="";
        if(numbers.size()<=0) return res;
        vector<string>sNum;
        for(auto x:numbers) {
            stringstream ss;
            ss<<x;
            sNum.push_back(ss.str());
        }
        sort(sNum.begin(), sNum.end(), cmp);
        for(auto str:sNum) {
            res.append(str);
        }
        return res;
    }
};