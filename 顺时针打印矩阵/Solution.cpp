/*
* @Author: yufeng
* @Date:   2018-10-12 00:02:51
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 00:03:06
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int>res;
        res.clear();
        int rows=matrix.size();
        int columns=matrix[0].size();
        int start=0;
        while(rows>start*2 && columns>start*2) {
            int endX=columns-start-1;
            int endY=rows-start-1;
            for(int i=start; i<=endX; i++) {
                res.push_back(matrix[start][i]);
            }
            if(endY>start) {
                for(int i=start+1; i<=endY; i++) {
                    res.push_back(matrix[i][endX]);
                }
            }
            if(start<endX && start<endY) {
                for(int i=endX-1; i>=start; i--) {
                    res.push_back(matrix[endY][i]);
                }
            }
            if(endY-start>1 && start<endX) {
                for(int i=endY-1; i>start; i--) {
                    res.push_back(matrix[i][start]);
                }
            }
            start++;
        }
        return res;
    }
};