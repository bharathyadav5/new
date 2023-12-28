#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*Problem Statement: Eliminate duplicates from LL
Problem Level: EASY
Problem Description:
You have been given a singly linked list of integers where the elements are sorted in ascending order. 
Write a function that removes the 
consecutive duplicate values such that the given list only contains
 unique elements and returns the head to the updated list.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.

The first and the only line of each test case or query contains the elements(in ascending order) of the 
singly linked list separated by a single space.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence,
 would never be a list element.

Output format :
For each test case/query, print the resulting singly linked list of integers in a row,
 separated by a single space.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Time Limit: 1sec

Where 'M' is the size of the singly linked list.

Sample Input 1 :
1
1 2 3 3 4 3 4 5 4 5 5 7 -1

Sample Output 1 :
1 2 3 4 3 4 5 4 5 7

Sample Input 2 :
2
10 20 30 40 50 -1
10 10 10 10 -1

Sample Output 2 :
10 20 30 40 50
10
*/
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
node* removeduplicates(node* head){
    node* temp=head;
    while((temp->next) != NULL){
       if((temp->data)==((temp->next)->data)){
            temp->next=(temp->next)->next;
       }
       else{
       temp=temp->next;
       }
    }
    return head;
    /*while(head != NULL){
        cout<<head->data<<" ";   // if we are supposed to use void function
        head=head->next;
    }cout<<endl;*/
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
    node* head2=removeduplicates(head);
    print(head2);
    return 0;
}