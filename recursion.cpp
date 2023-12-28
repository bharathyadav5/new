#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
/*int sum(int n){
    if(n==0){
        return 0;       //  sum of n numbers

    }
    return n + sum(n-1);

}
int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    cout<<sum(n);
    return 0;
}*/
/*int power(int n,int p){
    if(p==0){
        return 1;             // pth power of a number
    }
    return n*power(n,p-1);
}
int main(){
    int n,p;
    cout<<"enter the number and the power\n";
    cin>>n>>p;
    cout<<power(n,p);
}*/
/*int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);    //   factorial of a number
}
int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    cout<<factorial(n);

}*/
/*int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }                  // finding nth number of a fibonacci series
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout<<"enter the position\n";
    cin>>n;
    cout<<fibonacci(n);

}*/
int maximum(int arr[],int n){
    int maxvalue=arr[0];
    if(n==1){
        return arr[0];    // maximum element of an array
    } 
    maxvalue=max(maxvalue,maximum(arr+1,n-1));
    return maxvalue;

}
int main(){
   /*int m;
   cout<<"enter the size of the array\n";
   cin>>m;
   int arr[m];
   for(int i=0;i<m;i++){
    cin>>arr[i];
   }*/
    int arr[]={2,6,8,9,0,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maximum(arr,n);
}
/*bool binarysearch(int arr[],int n,int key){
    int mid=n/2;

    if(key<arr[mid]){
        binarysearch(arr,(mid/1<<n),key);
    }
    if(key>arr[mid]){
        binarysearch(arr+mid,(mid/1<<n),key);
    }
    if(key==arr[mid])return true;
    
}
int main(){
    int arr[]={1,3,4,5,7,9};
    int key;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter the number to be searched\n";
    cin>>key;
    // *arr=sort((*arr).begin(),(*arr).end())
    cout<<binarysearch(arr,n,key);
}*/