/*
* @Author: yufeng
* @Date:   2018-10-12 00:01:52
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 00:02:01
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    stack<int>st1,st2;///维护st2栈（顶端的值最小，有序栈）
    void push(int value) {
        st1.push(value);
        if(st2.empty() || (!st2.empty()&&value<st2.top())){
            st2.push(value);
        }
    }
    void pop() {
        if(st1.top() == st2.top()){///只有顶端的数相等st2才出栈
            st2.pop();
        }
        st1.pop();
    }
    int top() {
        return st1.top();
    }
    int min() {
        return st2.top();
    }
};