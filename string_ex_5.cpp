#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// to find which character is repeating most number of times in a string
int main(){
    string s,m;
    cout<<"enter the string\n";
    cin>>s;
    m="";
    int len=0,maxnum=0;

    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
        if(s[i]==s[j]){
            m=s[i];
            len=len+1;
            maxnum=max(len,maxnum);
        }
    }
    len=0;
    }
    cout<<maxnum;
    return 0;
}
/*int main(){
    string s="abfghfjfdegdfdd";
    int freq[26];
    for (int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }
    char ans='a';
    int maxfreq=0;
    for(int i=0;i<26;i++){
        if(freq[i]>maxfreq){
            maxfreq=freq[i];
            ans=i+'a';
        }
    }
    cout<<maxfreq<<" "<<ans<<endl;
}

*/