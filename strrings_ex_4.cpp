#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*int main(){
    string s;  // to find the greatest number that can be formed using the numeric string
    cout<<"enter the numeric string\n";
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=s.length();i>=0;i--){
        cout<<s[i];
    }
    return 0;
}*/
/*int main()
{
    string s="945678924";        // another way
    sort(s.begin(),s.end(),greater<int>())
    cout<<s
}*/
int main(){
    string s;
    cout<<"enter the string\n";    // to find if it is a palindrome
    cin>>s;
    bool ok=false;
    for(int i=0;i<s.length()/2;i++){
        
            if(s[i]==s[(s.length()/2)-i]){
                ok=true;
            }
        
    }if(ok)cout<<"yes it is a palindrome";
    else cout<<"no it is not a palindrome";
}
/*      QUESTION
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".*/

/*string prefix(vector<string>&s){
        int ans = s[0].length(), n = s.size();
        for(int i=1; i<n; i++){
            int j = 0;
            while(j<s[i].length() && s[i][j]==s[0][j])j++;
            ans = min(ans, j);
        }
        return s[0].substr(0, ans);
    
}
int main(){
    vector<string>s;
    string k;
    for(int i=0;i<3;i++){
        cin>>k;
        s.push_back(k);
    }
    cout<<prefix(s);
}*/

/* int firstUniqChar(string s) {
           int arr[26]={0};         // not by me
        int ans = -1;
        for(int i=0; i<s.length(); i++){
            int index = s[i]-'a';
            cout<<s[i]-'a'<<endl;
            arr[index]++;
        }
        for(int i=0;i<s.length();i++){
            if(arr[s[i]-'a'] == 1) return i; 
        }
        return ans;
    }
int main(){
    string s;
    cin>>s;
    cout<<firstUniqChar(s);
    return 0;
}*/