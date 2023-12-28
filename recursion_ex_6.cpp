#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
/*void print(int n,vector<int> v){
    if(n==1){
        v.push_back(n);
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }                                 // to print first n numbers 
                                          //   another way
        return ;
    }
    v.push_back(n);
    print(n-1,v);
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    print(n,v);
}*/
/*int print(int n){
    if(n==1){
        return 1;
    }
    int m=print(n-1);
    cout<<m<<" ";           // to print first n numbers
    return m+1;
}
int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    cout<<print(n);
}*/
/*void digits(int n,int count){
    if(n==0){
        cout<<count;
        return ;
    }
    n=n/10;                    //    number of digits 
    count=count+1;             //    another method
    digits(n,count);
}
int main(){
    int n,count=0;
    cout<<"enter the number\n";
    cin>>n;
    digits(n,count);
}*/

/*int digits(int n){
     
    if(n==0){
        return 0;
    }

    return 1 + digits(n/10);        //   number of digits
}
int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    cout<<digits(n);
}*/

/*void print(int n){
    if(n<0){
        return ;
    }
    if(n==0){
        cout<<n<<" ";
        return ;
    }  // print(n-1);       // this gives runtime error
    print(n--);            // because n-- is different as n-1 ---> i.e n-- passes n value first and 
    cout<<n<<" ";         // then decreases the actual value of n so something like 
                          // never ending loop will be created
                        // where as n-1 passes the decreased value
}

int main() {
    int num = 3;
    print(num);
    return 0;
}*/

/*int sum(int arr[],int n){
    int sumarr=arr[0];
    if(n==0){           // sum of elements in array
        return 0;
    }
    return sumarr+sum(arr+1,n-1);
}
int main(){
    int arr[]={2,5,7,9,1,4,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sum(arr,n);
}*/
/*bool exist(int arr[],int n,int x){
    if(n==0){
        return false;
    }
    if(arr[0]==x){
        return true;
    }                    //   to check if an element is present in an array
    return exist(arr+1,n-1,x);

}
int main(){
    int arr[]={2,5,3,4,7,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;cin>>x;
    cout<<exist(arr,n,x);
}*/
/*int firstindex(int arr[],int n,int x){
    if(n==0){
        return -1;
    }
    if(arr[0]==x){
        return 0;         //  to find the first index of an element in an array
    }
    int ans=firstindex(arr+1,n-1,x);
    if(ans==-1){
        return -1;
    }
    return ans+1;
}
int main(){
    int arr[]={2,4,2,4,9,3,4,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;cin>>x;
    cout<<firstindex(arr,n,x);
}*/
/*int lastindex(int arr[],int n,int x){
    if(n==0){
        return -1;
    }
    if(arr[n-1]==x){
        return n-1;
    }
    int ans=lastindex(arr,n-1,x);
    if(ans==-1){
        return -1;             // to find the last index of an element in an array
    }                          // traversing from ending
    return ans;
}
int main(){
    int arr[]={3,5,7,8,3,5,3,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;cin>>x;
    cout<<lastindex(arr,n,x);
}*/
int lastindex(int arr[],int n,int x){
    static int i,ans=-1;
    if(i==n){
        return ans;
    }
    if(arr[i]==x){
        ans=i;          // to find the last index of an element in an array
    }                   // traversing from beginning
    i++;
    lastindex(arr,n,x);
    return ans;
}
int main(){
    int arr[]={2,4,2,4,9,3,4,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;cin>>x;
    cout<<lastindex(arr,n,x);
}
/*void allindex(int arr[],int n,int x){
    static int i=0,ans=-1;
    if(i==n){
        if(ans==-1){
        cout<<ans;
        }
        return ;
    }
    if(arr[i]==x){         //  to print all indices of an element in an array
        cout<<i<<" ";
        ans=0;
    }
    i++;
    allindex(arr,n,x);
    
}
int main(){
    int arr[]={3,5,6,8,4,3,4,6,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;cin>>x;
    allindex(arr,n,x);
}*/