#include<iostream>
using namespace std;
/*int numberofones(int n){
    int count=0;
    while(n){
        n=(n & (n-1));
        count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    cout<<numberofones(n)<<endl;
    return 0;
}*/
void subsets(int arr[],int n){
    for(int i=0;i<(1<<n);i++){      // 1<<n = 2 power n
        for (int j=0;j<n;j++){
           if(i & (1<<n)){
              cout<<arr[j]<<" ";
           }
           cout<<endl;
        }                       

    }
}
int main(){
 int arr[4]={1,2,3,4};
 subsets(arr,4);
 return 0;
}