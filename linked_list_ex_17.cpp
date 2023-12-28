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
node* reverse(node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* m= reverse(head->next);
    node* temp=m;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=head;
    head->next=NULL;
    return m;
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
    node* head2=reverse(head);
    print(head2);
    return 0;
}