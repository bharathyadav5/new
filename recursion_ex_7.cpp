#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
/*int length(char str[]){
    if(str[0]=='\0'){
        return 0;
    }
    int ans=length(str+1);
    return ans+1;          // to print the length of the string in a char array        
}
int main(){
    char str[100]={};
    cin>>str;
    cout<<length(str);
    return 0;
}*/
/*void removex(char str[]){
    if(str[0]=='\0'){
        return ;
    }
    if(str[0]!='x'){
        removex(str+1);
    }
    if(str[0]=='x'){
        int i=1;
        for(;str[i]!='\0';i++){
            str[i-1]=str[i];        // remove 'x' from a string in a char array
        }                           //  different way of using for loop
        str[i-1]=str[i];
        removex(str);
    }
    
}
int main(){
    char str[100];
    cin>>str;   
    removex(str);
    cout<<str;
}*/
/*void replace(string s,char c1,char c2){
    static int i=0;
    if(i==s.length()){
        cout<<s;
        return ;
    }
    if(s[i]==c1){
        s[i]=c2;
    }
    i=i+1;
    replace(s,c1,c2);        // to replace a character in a string
}
int main(){
    string s;
    cout<<"enter the string\n";
    cin>>s;
    char c1,c2;cin>>c1>>c2;
    replace(s,c1,c2);
    
}*/
/*void duplicate(string s){
    static int i=0;
    if(i==s.length()){
        cout<<s;
        return ;         // remove duplicates from a string
    }
    if(s[i]==s[i+1]){
        s[i]='\0';
    }
    i=i+1;
    duplicate(s);
}
int main(){
    string s;
    cin>>s;
    duplicate(s);
}*/
/*void star(string s){
    static int i=0,n=s.length();
    if(i==n){
        cout<<s<<endl;
        return ;                    // to add a star in between two adjacent similar characters
    }
    if(s[i]==s[i+1]){                
        s=s.substr(0,i+1) + "*" + s.substr(i+1);
        n=n+1;
    }
    i=i+1;
    star(s);
}
int main(){
    string s;
    cin>>s;
    star(s);
}*/
/*string star(string s){
    if(s.length()==0 || s.length()==1){
        return s;
    }
    if(s[0]==s[1]){          //    another method
        s=s.substr(0,1) + "*" + s.substr(1);
    }
    return s[0] + star(s.substr(1));
}
int main(){
    string s;
    cin>>s;
    cout<<star(s);
}*/
