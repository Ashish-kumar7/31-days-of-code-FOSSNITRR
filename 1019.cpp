class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>A;
        while(head!=NULL){
            A.push_back(head->val);
            head=head->next;
        }
        vector<int>B(A.size());
        stack<int>S;
        for(int i=A.size()-1;i>=0;i--){
            while(!S.empty() && A[i]>=S.top()){
                S.pop();
            }
            if(S.empty()){
                B[i]=0;
                S.push(A[i]);
            }
            else {
                B[i]=S.top();
                S.push(A[i]);
            }   
        }
        return B;
    }
};