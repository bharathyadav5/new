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
    }
    return head;
}
node* sorting(node* head){
    node* temp=head;
    node* prev=NULL;
    node* cur=head->next;
    while(cur != NULL){
        if((temp->data)>(cur->data)){
            if(prev==NULL){
                prev=cur;
            }
            else{
                prev->next=cur;
                temp->next=cur->next;
                cur->next=temp;
            }
        }
        temp=temp->next;
        cur=cur->next;
    }
    return prev;
}
void print(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}
int main(){
    node* head=input();
    print(head);
    node* head2=sorting(head);
    print(head2);
    return 0;
}