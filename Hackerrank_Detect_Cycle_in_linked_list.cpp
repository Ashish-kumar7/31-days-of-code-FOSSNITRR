bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode * slow=head;
    SinglyLinkedListNode * fast=head;
    while((slow->next!=NULL) && (fast->next!=NULL && fast->next->next!=NULL) ){
        
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return 1;
        }
    }
    return 0;
}