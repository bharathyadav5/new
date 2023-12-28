#include<iostream>
#include<string>
#include<math.h>
#include<stack>
using namespace std;
int prefixevaluation(string s){
    stack<int>st;
    for(int i=s.length()-1;i>=0;i--){ // for(int i=0;i<s.length();i++)---> for postfixevaluation
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            switch(s[i]){
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op1-op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '/':
                    st.push(op1/op2);
                    break;
                case '^':
                    st.push(pow(op1,op2));
                    break;
                default :
                    break;    
            }
            // if(s[i]=='+')st.push(op1+op2);
            // else if(s[i]=='-')st.push(op1-op2);
            // else if(s[i]=='*')st.push(op1*op2);
            // else if(s[i]=='/')st.push(op1/op2);
            // else if(s[i]=='^')st.push(pow(op1,op2));
        }
    }
    return st.top();
}
int main(){
    string s="-+7*45+20";
    cout<<prefixevaluation(s);
    return 0;
}