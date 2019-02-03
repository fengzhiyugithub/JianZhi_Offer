/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int>res;
        stack<ListNode*>node;
        ListNode* pNode=head;
        while(pNode!=nullptr) {
            node.push(pNode);
            pNode=pNode->next;
        }
        while(!node.empty()) {
            pNode=node.top();
            node.pop();
            res.push_back(pNode->val);
        }
        return res;
    }
};


/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int>res;
    vector<int>& printListFromTailToHead(ListNode* head) {
        if(head!=nullptr) {
            if(head->next!=nullptr) {
                printListFromTailToHead(head->next);
            }
            res.push_back(head->val);
        }
        return res;
    }
};