#include<iostream>
#include<string>
using namespace std;
/*int main(){
    string s;        // printing a specific character at the end after removing in the string
    int count=0;
    cout<<"enter the string\n";
    cin>>s;                               // another way
    for(int i=0;i<s.length();i++){
        if(s[i]=='x'){
            s=s.substr(0,i)+""+s.substr(i+1);
            count=count+1;
        }
    }
    cout<<s;
    for(int i=0;i<count;i++){
        cout<<"x";
    }
    return 0;
}*/
/*string raa(string s){
    
    if(s.length()==0){
        return  "" ;      // printing a specific character at the end after removing in the string
    }
    char ch=s[0];
    string ans=raa(s.substr(1));
    if(s[0]=='x'){
    
        return ans + ch;
    }
    return ch+ans;
}
int main(){
    string s;
    cout<<"enter the string\n";
    cin>>s;
    cout<<raa(s);

}*/
void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string ros=s.substr(1);
    substring(ros,ans);
    substring(ros,ans+ch);

}
int main(){
    string s;
    cout<<"enter the string\n";
    cin>>s;
    string ans="";
    substring(s,ans);

}