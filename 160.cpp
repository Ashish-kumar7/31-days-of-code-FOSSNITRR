class Solution{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        ListNode * st1=headA;
        ListNode * st2=headB;
        ListNode * st11=headA;
        ListNode * st22=headB;
        int len1=0;
        int len2=0;
        while(st11!=NULL){
            st11=st11->next;
            len1++;
        }
        while(st22!=NULL){
            st22=st22->next;
            len2++;
        }
        if(len1>len2){
            int x=len1-len2;
            while(x--){
                st1=st1->next;
            }
        }
        else{
            int y=len2-len1;
            while(y--){
                st2=st2->next;
            }
        }
        while(st1!=st2){
            st1=st1->next;
            st2=st2->next;
        }
        return st1; 
    }
};