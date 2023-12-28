#include<iostream>
using namespace std;
/*int unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
int main(){
    int arr[7]={1,2,3,4,1,2,3};
    cout<<unique(arr,7)<<endl;
    return 0;
}*/
int set_bit(int n,int pos){
    return((n & (1<<pos))!=0);
}
void unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    } 
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum>>1;

    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(set_bit(arr[i],(pos-1))){
           newxor=newxor^arr[i];
        }
    }cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
    }
    int main(){
        int arr[8]={1,2,3,1,2,3,5,7};
        unique(arr,8);
    }