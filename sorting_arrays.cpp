#include<iostream>
using namespace std;
/*int main(){
    int n;
    cout<<"enter the size of array\n";
    cin>>n;                             //selection sort
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"enter the element "<<i<<endl;
        cin>>arr[i];
    }
    for (int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;}
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
/*int main(){
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];              //bubble sort
    }
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }

        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
int main(){
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];                   //insertion sort
    }
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}