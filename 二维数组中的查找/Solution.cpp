class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int row=array.size();
        int col=array[0].size()-1;
        if(!row)
            return false;
        int i=0;
        while(i<row&&col>=0) {
            if(target>array[i][col]) {
                i++;
            } else if(target<array[i][col])
                col--;
            else {
                return true;
            }
        }
        return false;
    }
};