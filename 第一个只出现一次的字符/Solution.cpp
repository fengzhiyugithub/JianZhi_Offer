/*
* @Author: yufeng
* @Date:   2018-10-12 00:08:29
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 00:08:38
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        int cnt[256]= {0},index[256],len=str.length();
        for(int i=0; i<len; i++) {
            cnt[str[i]-'0']++;
            if(cnt[str[i]-'0']==1) {
                index[str[i]-'0']=i;
            }
        }
        for(int i=0; i<len; i++) {
            if(cnt[str[i]-'0']==1) {
                return index[str[i]-'0'];
            }
        }
        return -1;
    }
};