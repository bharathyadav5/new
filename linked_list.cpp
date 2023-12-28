#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next=NULL;
    node( int data){
       this-> data=data;
    }
};
/*node*input(){
    int data;
    cin>>data;
    node*head=NULL;
    while(data != -1){
        node*newnode = new node(data);
        if(head == NULL){
            head=newnode;
        }                      //    taking input of a linked list
        else{                  //   it's time complexity is O(n*2)
            node*temp=head;
            while(temp->next != NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
        cin>>data;
    }
    return head;
}*/
node*input_better(){
    int data;
    cin>>data;
    node*head=NULL;
    node*tail=NULL;
    while(data != -1){
        node*newnode = new node(data);
        if(head == NULL){
            head=newnode;
            tail=newnode;
        }
        else{                   // it's time complexity is O(n)
            tail->next=newnode;
            tail=tail->next;
            // OR    tail=newnode 
        }
        cin>>data;
    }
    return head;
}
void print(node*head){
    while(head != NULL){          // printing elements of a linked list
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    //node*head=input();
    node*head=input_better();
    print(head);

   /*Statically decalring elements of a linked list

   node n1(1);
   node*head=&n1;
   node n2(2);
   n1.next=&n2;
   cout<<n1.data<<" "<<n2.data;
   node n3(3);
   node n4(4);
   node n5(5);
                           // in this way we can connect and store elements
   n2.next=&n3;
   n3.next=&n4;
   n4.next=&n5;
   */

   /* dynamically declaring the elemnets of a linked list
    node*n1=new node(1);
    node*head=n1;
    node*n2=new node(2);
    n1->next=n2;
    node*n3=new node(3);
    n2->next=n3;
    node*n4=new node(4);
    n3->next=n4;
    node*n5=new node(5);
    n4->next=n5;
    cout<<n1->data<<" "<<n2->data<<" "<<n3->data<<" "<<n4->data<<" "<<n5->data;
    */
    return 0;
}

// QUESTION

/*class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


void print(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(20);
    Node *node4 = new Node(20);
    node1 -> next = node2;
    node2 -> next = node3;        this gives 20 20 20 as output
    node3 -> next = node4;
    print(node2);
}*/