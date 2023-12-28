#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node* next=NULL;
    node(int data){
        this->data=data;
    }
};
node* input(){
    int data;
    cin>>data;
    node* head=NULL;
    node* tail=NULL;
    while(data != -1){
        node* newnode=new node(data);
        if(head == NULL){
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=tail->next;
    }
    cin>>data;
   }return head;
}
node* reverse(node* &head){
        node* prev = NULL;
        while(head!=NULL){
            node* k = head->next;
            head->next = prev;
            prev = head;
            head = k;
        }
        return prev;
    }
    node* reverseKGroup(node* head, int k) {
        node* temp = head;
        int p = k-1;
        while(p-- && temp != NULL){
            temp = temp->next;
        }
        if(!temp) return head;
        node* k1= temp->next;
        temp->next = NULL;
        head = reverse(head);
        temp = head;
        while(temp->next != NULL) temp = temp->next;
        temp->next = reverseKGroup(k1,k);
        return head;
    }
/*node* kreverse(node* head,int k){
    static int i=1,n=0;static node* head2;
    while(head->next != NULL){
    if(i==k){
        while(n<1){
        if(i==k){
            head2=head;
            i=1;
        }n=n+1;
        }
        i=1;
        return head2;
    }
    i=i+1;
   node* m=kreverse(head->next,k);
   m->next=head;
   return head;
}
return head2;
}*/
void print(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}
int main(){
    node* head=input();
    print(head);
    int k;cin>>k;
    node* head2=reverseKGroup(head,k);
    print(head2);
    return 0;
}