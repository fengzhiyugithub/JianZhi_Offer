/*
* @Author: yufeng
* @Date:   2018-10-11 23:55:41
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:56:16
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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        ListNode* p=nullptr;
        ListNode* cur=nullptr;
        if(pHead1==nullptr){
            return pHead2;
        }
        if(pHead2==nullptr){
            return pHead1;
        }
        while(pHead1!=nullptr && pHead2!=nullptr) {
            if(pHead1->val <= pHead2->val) {
                if(p==nullptr) {
                    cur=p=pHead1;
                } else {
                    cur->next=pHead1;
                    cur=cur->next;
                }
                pHead1=pHead1->next;
            } else {
                if(p==nullptr) {
                    cur=p=pHead2;
                } else {
                    cur->next=pHead2;
                    cur=cur->next;
                }
                pHead2=pHead2->next;
            }
        }
        if(pHead1!=nullptr) {
            cur->next=pHead1;
        }
        if(pHead2!=nullptr) {
            cur->next=pHead2;
        }
        return p;
    }
};

class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        ListNode* p=nullptr;
        ListNode* cur=nullptr;
        if(pHead1==nullptr) {
            return pHead2;
        }
        if(pHead2==nullptr) {
            return pHead1;
        }
        if(pHead1->val <= pHead2->val) {
            p=pHead1;
            p->next=Merge(pHead1->next,pHead2);
        } else {
            p=pHead2;
            p->next=Merge(pHead1,pHead2->next);
        }
        return p;
    }
};