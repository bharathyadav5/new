#include<iostream>
#include<math.h>
#include<climits>
#include<string>
using namespace std;

int main(){
    int n,sum,b,c;
    string s;
    cout<<"enter the number\n";
    cin>>n;
    for(int j=1;j<=n;j++){
        s=to_string(j);
        sum=0;
        
    for (int i=1;i<=s.length();i++){
        b=(j)%(10);
        
        sum=sum+pow(b,s.length());
        j=j/10;
    }//cout<<sum<<endl;
    if(sum==stoi(s)){
        cout<<"the armstrong number is "<<sum<<endl;
    }
     j=stoi(s);
    }
    return 0;
    }
    /*int main(){
        int n,sum,b;
        string s;
        cout<<"enter the number\n";
        cin>>n;
        sum=0;
        s=to_string(int (n));
        for(int i=1;i<=s.length();i++){
            b=(n)%(10);
            sum=sum+pow(b,s.length());
            n=n/10;
        }
        cout<<sum;
    
    
    return 0;

}*/