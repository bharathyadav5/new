#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
void reversesentence(string s){
   stack<string>st;
   for(int i=0;i<s.length();i++){
      string word="";
      while(s[i]!=' ' && i<s.length()){
         word=word+s[i];
         i++;
      }
      st.push(word);
   }
   int k=0;
   while(!st.empty()){
      k++;
      cout<<k;
      cout<<st.top()<<endl;
      st.pop();
   }
}
int main(){
    string s="hiii, how are you doing?";
    reversesentence(s);
   return 0;
}