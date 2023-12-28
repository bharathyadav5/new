#include<iostream>
#include<vector>
#include<string>
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
node* function(node* head1,node* head2){
    string s="",t="",k="",a="",b="";
    while(head1!=NULL){
        s=s+to_string(head1->data);
        head1=head1->next;
    }
    for(int i=s.length()-1;i>=0;i--){
        a=a+s[i];
    }
    while(head2!=NULL){
        t=t+to_string(head2->data);
        head2=head2->next;
    }
    for(int i=t.length()-1;i>=0;i--){
        b=b+t[i];
    }
    int m=stoi(a)+stoi(b);
    k=to_string(m);
    node* realhead=new node(0);
    node* dummyhead=realhead;
    for(int i=0;i<k.length();i++){
        int t = m%10;
        m=m/10;
        dummyhead->next=new node(t);
        dummyhead=dummyhead->next;
       // if(i==k.length()-1)dummyhead->next=NULL;
    }
    return realhead->next;
}
void print(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}
int main(){
    node* head1=input();
    print(head1);
    node* head2=input();
    print(head2);
    node* head3=function(head1,head2);
    print(head3);
    return 0;
}