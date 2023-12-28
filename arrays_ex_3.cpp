// find the first and last occurance of a number in an array
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    int arr[10]={1,6,2,5,2,5,2,4,3,5};
    cout<<"enter the required number\n";
    cin>>n;
    bool ok=false;
    for(int i=0;i<10;i++){     // arr[i]=*(arr+i) i.e cout<<arr ---> prints address of first element
        for(int j=9;j>i+1;j--){if(arr[i]==n){ //      cout<<*arr ---> prints first element (dereferencing)
            if(*(arr+i)==*(arr+j)){          //       cout<<*(arr+i) ---> prints i th element
                cout<<i<<" "<<j<<endl;
                ok=true;
                break;
            }
            }
        }if(ok)break;
    }
    for(int i=0;i<9;i++){
        if(i[arr]==n){       // arr[i]=i[arr] i.e we know arr[i]=*(arr+i)
            cout<<i<<endl;   //               so, i[arr]=*(i+arr) which is same
            ok=true;
        }if(ok)break;
    }
    return 0;
}/*int main(){
    int arr2[2]={0};
    int k=0;
    int x;
    int size=sizeof(arr2)/sizeof(arr2[0]);
    cin>>x;
    int arr[7]={2,5,1,2,6,7,8};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
           if(arr[j]==x){
            arr2[k]=j;
            continue;
            k++;
           }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr2[i];
    }
}*/
/*#include <bits/stdc++.h>
using namespace std;


int a=-1,z=-1;

void Occurence(int ele , vector<int> arr,int k){
    
    if(k<arr.size()){
    
    
        if(arr[k]==ele){
            if(a==-1) a=k;
            else z=k;
        }
        Occurence(ele,arr,k+1);
}
        
    }
    
    
int main()
{
    
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0 ;i< n ;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    
    int s_ele;
    cin>>s_ele;
    
    Occurence(s_ele,arr,0);
   
    cout<<"First Occurence: "<<a<<"  Lat occurence: "<<z<<endl;
    

    return 0;
}*/
/*int main(){
    int arr[]={3,34,5,1,56,7,8,23,45};
    int n=sizeof(arr)/sizeof(arr[0]),temp;
    vector<pair<int,int>>vp1;
    vector<int>vp2;
    for(int i=0;i<n;i++){
        if(arr[i]>=0 && arr[i]<=n){
            vp1.push_back(make_pair(arr[i],i));
        }
        else{
            vp2.push_back(arr[i]);    //   rearranging elements as a[i]=i
        }
    }
        for(int j=0;j<vp1.size();j++){
             //temp=arr[vp1[j].first];
            arr[vp1[j].first]=vp1[j].first;
           // arr[vp1[j].second]=temp;
        }
    for (int i=0;i<n;i++){
            if(arr[i]!=i){
                arr[i]=vp2[vp2.size()-1];
                vp2.pop_back();
            }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}*/