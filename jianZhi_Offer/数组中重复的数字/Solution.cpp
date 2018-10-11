/*
* @Author: yufeng
* @Date:   2018-10-12 00:07:13
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 00:07:37
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        bool vis[length];
        for(int i=0; i<length; i++){
            vis[i]=0;
        }
        for(int i=0; i<length; i++){
            if(vis[numbers[i]]){
                duplication[0] = numbers[i];
                return true;
            }
            vis[numbers[i]]=1;
        }
        return false;
    }
};


class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        for(int i=0; i<length; i++){
            int index=numbers[i]%length;
            if(numbers[index]>=length){
                duplication[0]=index;
                return true;
            }
            numbers[index]+=length;
        }
        return false;
    }
};