class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>S;
        ListNode * start=head;
        while(start!=NULL){
            S.push(start->val);
            start=start->next;
        }
        ListNode * start1=head;
        while(!S.empty()){
            if(S.top()!=start1->val){
                return 0;
            }
            else if(S.top()==start1->val){
                S.pop();
                start1=start1->next;
            }
        }
        if(!S.empty()){
            return 0;
        }
        return 1;
    }
};