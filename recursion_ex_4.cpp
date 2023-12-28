#include<iostream>
#include<string>
using namespace std;
/*void pi(string s){
    if(s.length()==0){
        return ;
    }
    if(s[0]=='p' && s[1]=='i'){
     cout<<"3.14";
     pi(s.substr(2));            //  replacing characters in a string using recursion
    }
    else{
        cout<<s[0];
        pi(s.substr(1));
    }

}
int main(){
    string s;
    cout<<"enter the string\n";
    cin>>s;
    pi(s);

  /*  //cout<<(s.substr(0,2) +"3.14" + s.substr(2));
    for(int i=0;i<s.length()-1;i++){         // another way
        if(s.substr(i,2)=="pi"){
             s=(s.substr(0,i)+"3.14"+ s.substr(i+2));
             
        }
    }cout<<s;

    return 0;
}*/


// tower of hanoi
/*void towerofhanoi(int n,char source,char dest,char helper){
    if(n==0){
        return ;
    }
    towerofhanoi(n-1,source,helper,dest);
    cout<<"move from "<<source<<" to "<<dest<<endl;
    cout<<"luchalanja"<<endl;
    towerofhanoi(n-1,helper,dest,source);
}
int main(){
    int n;
    cout<<"enter the number of rings\n";
    cin>>n;
    towerofhanoi(n,'A','C','B');

}*/
string dup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];    // removing duplicates from a string
    string ans=dup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;
}
int main(){
    string s;
    cout<<"enter the string\n";
    cin>>s;         
    cout<<dup(s);
    /*for(int i=0;i<s.length();i++){   // if we want to remove only adjacent letters we can use 
        for(int j=i+1;j<s.length();j++){  // only one for loop and use a[i]==a[i+1]
            if(s[i]==s[j]){              // removing duplicates from a string
                s=s.substr(0,j)+""+s.substr(j+1);
            }
        }
    }cout<<s;*/
}
