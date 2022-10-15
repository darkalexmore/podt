ListNode *moveToFront(ListNode *head){
        ListNode* temp=head;
        ListNode* prev=head;
        if(temp==NULL)
            return NULL;
        if(temp->next==NULL)
            return temp;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        temp->next=head;
        head=temp;
        return head;
    }
