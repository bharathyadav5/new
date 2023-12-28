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
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
node* oddeven(node* &head){
    node* oddhead=NULL;
    node* oddtail=NULL;
    node* evenhead=NULL;
    node* eventail=NULL;
    node* temp=head;
    while(temp != NULL){
        if((temp->data)%2==1){
            if(oddhead == NULL) oddhead = new node(temp->data),oddtail = oddhead;
            else{
                oddtail->next = new node(temp->data);
                oddtail = oddtail->next;
            }
        }
        else{
            if(evenhead == NULL) evenhead = new node(temp->data),eventail = evenhead;
            else{
                eventail->next = new node(temp->data);
                eventail = eventail->next;
            }
        }
        temp=temp->next;
    }
    head = oddhead;
    oddtail->next = evenhead;
    return head;
}
void print(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    node* head=input();
    head = oddeven(head);
    print(head);
    return 0;
}//[2,1,3,5,6,4,7]