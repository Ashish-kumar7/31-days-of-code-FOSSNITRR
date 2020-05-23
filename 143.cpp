
class Solution {
public:
    
    
    void reorderList(ListNode* head) {
        
        if(head==NULL){
            return ;
        }
        
        ListNode * slow=head;
        ListNode * fast=head;
        
        
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        stack<ListNode*>S;
        
        while(slow!=NULL){
            S.push(slow);
            slow=slow->next;
        }
        
        slow=head;
        
        for(;;){
            
        ListNode* last = S.top();
        S.pop();
        if(last == slow || S.empty())
        {
            last->next = NULL;
            return;
        }
        ListNode* next = slow->next;
        slow->next = last;
        last->next = next;
        slow = next;
    }
        
    }
};