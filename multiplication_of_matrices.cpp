#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the size of first matrix\n";
    cin>>a>>b;
    cout<<"enter the size of the second matrix\n";
    cin>>b>>c;
    int arr1[a][b];
    int arr2[b][c];
    int arr3[a][c];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr1[i][j];

        }
    }
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            arr3[i][j]=0;
        }
    }
    for(int i=0;i<a;i++){
  for(int j=0;j<c;j++){
    for(int k=0;k<b;k++){
        arr3[i][j]+=arr1[i][k]*arr2[k][j];
    }

  }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}