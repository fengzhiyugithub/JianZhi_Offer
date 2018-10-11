/*
* @Author: yufeng
* @Date:   2018-10-11 23:29:33
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:29:54
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int now;
        if(stack2.empty()) {
            while(!stack1.empty()) {
                now=stack1.top();
                stack1.pop();
                stack2.push(now);
            }
        }
        now=stack2.top();
        stack2.pop();
        return now;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};