#include<iostream>
#include<math.h>
using namespace std;
/*int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    bool ok=false;        // finding if a number is a power of 2
    for(int i=1;(n/(pow(2,i)))>0;i++){
        if(n==pow(2,i)){
            ok =true;
            break;
        }else ok=false;
    }if(ok)cout<<"yes";
    else cout<<"no";

}*/
/*int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    if((n & (n-1))==0)  // finding if a number is a power of 2 using bit manipulation
    cout<<"yes";
    else
    cout<<"no";

}*/
/*int main(){   // finding even or odd number using bits
    int a;
    cout<<"enter the number\n";
    cin>>a;                             ex: a=3;a=11
                                            1=01
    if(a&1==0){                              11 & 01 = 01  so it is odd
        cout<<"the number is  even";
    }else
    cout<<"the number is odd";
return 0;
}*/
/*int main(){
    int a=4;         // swapping numbers using bits or without using third variable
    int b=7;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b;
}*/

