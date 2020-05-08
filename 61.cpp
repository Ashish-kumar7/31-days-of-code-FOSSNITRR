class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL){
            return head;
        }
        ListNode * start=head;
        int n=1;
        while(start->next!=NULL){
            n++;
            start=start->next;
        }
        k=k%n;
        if(k==0){
            return head;
        }
        int p=n-k;
        ListNode * top=head;
        ListNode * begin;
        while(p--){
            begin=top;
            top=top->next;
        }
        start->next=head;
        head=top;
        begin->next=NULL;
        return top;
    }
};