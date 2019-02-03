/*
* @Author: yufeng
* @Date:   2018-10-11 23:56:38
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:57:05
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
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead == nullptr) {
            ///pHead为当前节点，如果当前节点为空的话，那就什么也不做，直接返回null；
            return nullptr;
        }
        ListNode* pre=nullptr;
        ListNode* next=nullptr;
        /**当前节点是head，pre为当前节点的前一节点，next为当前节点的下一节点
        需要pre和next的目的是让当前节点从pre->head->next1->next2变成pre<-head next1->next2
        即pre让节点可以反转所指方向，但反转之后如果不用next节点保存next1节点的话，此单链表就此断开了
        所以需要用到pre和next两个节点
        */
        while(pHead!=nullptr) {
            /**做循环，如果当前节点不为空的话，始终执行此循环，此循环的目的就是让当前节点从指向next到指向pre
            如此就可以做到反转链表的效果
            先用next保存head的下一个节点的信息，保证单链表不会因为失去head节点的原next节点而就此断裂
            */
            next=pHead->next;
            ///保存完next，就可以让head从指向next变成指向pre了
            pHead->next=pre;
            ///head指向pre后，就继续依次反转下一个节点
            ///让pre，head，next依次向后移动一个节点，继续下一次的指针反转
            pre=pHead;
            pHead=next;
        }
        ///此时链表已经反转完毕
        return pre;
    }
};