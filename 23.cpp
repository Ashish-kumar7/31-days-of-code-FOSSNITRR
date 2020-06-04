class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.empty()){
            return NULL;
        }
        
        priority_queue< int,vector<int>,greater<int> >q;
        
        for(int i=0;i<lists.size();i++){
            
            ListNode* l=lists[i];
            
            while(l!=NULL){
                
                q.push(l->val);
                l=l->next;
            }   
        }
        ListNode * res=new ListNode(0);
        
        ListNode * temp=res;
        
        while(!q.empty()){
            ListNode * curr=new ListNode( q.top() );
            
            q.pop();
            
            temp->next=curr;
            
            temp=temp->next;   
        }
        return res->next;    
    }
};