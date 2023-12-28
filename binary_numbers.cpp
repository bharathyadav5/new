#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
string binary(string a, string b){
    int m=stoi(a),n=stoi(b), k=0,h=0;
    string s="",q="";

    // from binary number to natural number
    
    for(int i=a.length()-1;i>=0;i--){
        int t=m%10;
        m=m/10;
        k=k+pow(2,a.length()-(i+1))*t;
    }
    for(int i=b.length()-1;i>=0;i--){
        int t=n%10;
        n=n/10;
        h=h+pow(2,b.length()-(i+1))*t;
    }
    int r= k+h;

    //  from a natural number to binary number

    while((r/2)>0 || r==1){
        s=s+to_string(r%2);
        r=r/2;
    }
    for(int i=s.length()-1;i>=0;i--){
        q=q+s[i];
    }
    return q;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<binary(a,b);
}