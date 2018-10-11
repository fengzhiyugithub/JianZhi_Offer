/*
* @Author: yufeng
* @Date:   2018-10-11 23:36:39
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:36:58
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead == nullptr || k == 0) {
            return nullptr;
        }
        stack<ListNode*>sta;
        ListNode* p = pListHead;
        while(p != nullptr) {
            sta.push(p);
            p=p->next;
        }
        if(sta.size() >= k) {
            while((--k)) {
                sta.pop();
            }
            return sta.top();
        } else {
            return nullptr;
        }
    }
};


class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead == nullptr || k == 0) {
            return nullptr;
        }
        ListNode* first = pListHead;
        ListNode* second = pListHead;
        while(k--){
            if(first == nullptr){
                return nullptr;
            }
            first = first -> next;
        }
        while(first != nullptr){
            first = first -> next;
            second = second -> next;
        }
        return second;
    }
};