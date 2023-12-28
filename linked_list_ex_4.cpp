#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*Problem Statement: Find a node in LL (recursive)
Problem Level: EASY
Problem Description:
Given a singly linked list of integers and an integer n, find and return the index for the first occurrence of 'n'  in the linked list. -1 otherwise.
Follow a recursive approach to solve this.
Note :
Assume that the Indexing for the linked list always starts from 0.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains the elements of the singly linked list separated by a single space.

The second line of input contains a single integer depicting the value of 'n'.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element

Output format :
For each test case/query, print the elements of the updated singly linked list.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where M is the size of the singly linked list.

Time Limit:  1sec

Sample Input 1 :
1
3 4 5 2 6 1 9 -1
100

Sample Output 1 :
-1

Sample Input 2 :
2
10 20010 30 400 600 -1
20010
100 200 300 400 9000 -34 -1
-34

Sample Output 2 :
1
5
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
int search(node* head,int n){
    if(head==NULL){
        return -1;
    }
    if((head->data)==n){
        return 0;
    }
    int m=search(head->next,n);
    if(m != -1){
        m=m+1;
    }
    return m;
}
void print(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}
int main(){
    int t,n;
    cin>>t;
    vector<int>v;
    for (int i=1;i<=t;i++){
    node* head=input();
    print(head);
    cin>>n;
    v.push_back(search(head,n));
    }
    for(auto element:v){
        cout<<element<<endl;
    }
    return 0;
}