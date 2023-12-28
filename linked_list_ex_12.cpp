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
void print(node* head);
node* swap(node* head,int m,int n){
    if(m>n) swap(m,n);
    node* temp = head;
    node* prev = NULL;
    node* temp2 = head;
    node* prev2 = NULL;
    for(int i=0;i<m;i++){
        prev = temp;
        temp = temp->next;
    }
    for(int i=0;i<n;i++){
        prev2 = temp2;
        temp2 = temp2->next;
    }
    if(m != 0){
        prev->next = temp2;
        prev2->next = temp;
        node* x = temp2->next;
        temp2->next = temp->next;
        temp->next = x;
        return head;
    }
    else if(n == 1){
        temp->next = temp2->next;
        temp2->next = temp;
        return temp2;
    }
    else{
        node* x = temp->next;
        temp->next = temp2->next;
        prev2->next = temp;
        temp2->next = x;
        return temp2;
    }
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}
int main(){
    node* head=input();
    print(head);
    int m,n;
    cin>>m>>n;
    node* head2=swap(head,m,n);
    print(head2);
    return 0;
}