class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * dummy=new ListNode(0);
        dummy->next=head;
        ListNode * ptr1=head;
        ListNode * ptr2=dummy;
        while(n--){
            ptr1=ptr1->next;
        }
        while(ptr1){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        ptr2->next=ptr2->next->next;
        return dummy->next;
    }
};