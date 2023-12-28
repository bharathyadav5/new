#include<iostream>
#include<string>
using namespace std;

int test(int i,int j,int k){
    if((i>=j) && (k>=j)){
        return i;
    }
    else{                     // question 1
        if(i<j)
        return(test(++i,k--,--j));
    return (test(++i,k--,--j));    
    }
}
int main(){
 cout<<test(2,3,4);
}



/*int main(){
    int i,j;
    for(int i=1;i<=2;i++){
        j=1;
        while(i%j == 2){
            j--;
            j=j+3;            // question 2
        }
        cout<<i<<endl;
        cout<<j<<endl;
    }
}*/



/*int main(){
    long num=56000,r,base=1,b,no=2;
    if(num<0){
        r=num%2;
        if(r==1){
            no++;
        }
        b=b-r*base;           // question 3
        num=num%2;
        base=base-10;
    }
    cout<<(no+10*5);
}*/



/*int main(){
    int m;cin>>m;
    string s,k,n="",j="";
    cin>>s;
    int b=m/s.length();
    if(m%s.length()==0){
        if(((m/s.length())%2)==0){
            m=0;
        }
        else{
             for(int i=s.length()-1;i>=0;i--){
           n=n+s[i];
       }
       s=n;
       m=0;
        }
    }
    else if(b%2 != 0  ){
       for(int i=s.length()-1;i>=0;i--){
           n=n+s[i];
       }
       s=n; }                                    // question 4
     while(m>s.length()){
        m=m-s.length();
       }
    
    k=s.substr(0,m);
    for(int i=k.length()-1;i>=0;i--){
        j=j+k[i];
    }
    cout<<(j+s.substr(m));
    return 0;
}*/



/*bool prime(int k){
    bool ok=true;
    if(k==1)return false;
    for(int i=2;i<k;i++){
        if(k%i == 0){
            ok=false;
            break;
        }
    }
    return ok;                    // question 5
}
int main(){
    int m,n,sum=0;
    cin>>m>>n;
    for(int i=m;i<=n;i++){
    if(prime(i)){
        sum=sum+i;
    }
    }
    for(int i=1;i<=sum;i++){
        if(sum%i==0){
            cout<<i<<" ";
        }
    }
}*/