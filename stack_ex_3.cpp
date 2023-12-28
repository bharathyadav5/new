#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&st,int k){
    if(st.empty()){
        st.push(k);
        return;
    }
    int t=st.top();
    st.pop();
    insertatbottom(st,k);
    st.push(t);
}
void reverse( stack<int>&st){
    if(st.empty()){
        return ;
    }
    int k=st.top();
    st.pop();
    reverse(st);
    insertatbottom(st,k);
}
void print(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
};
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    print(st);
    reverse(st);
    print(st);
}