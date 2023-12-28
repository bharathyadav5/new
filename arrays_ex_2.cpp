/*#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
/*int main(){
    int n;
    cout<<"enter th size of array\n";
    cin>>n;
    int arr[n];
    int sum=0;
    int s;
    cout<<"enter the required sum\n";
    cin>>s;
    for(int i=0;i<n;i++){          // check the given subarray sum   
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum==s){
                cout<<i<<" "<<j;
            }
        }
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];              // sorting an array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
             if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
             }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }}*/
    /* for(int i=0;i<n;i++){
        if(arr[i]>0){             // to print the second least missing positive number in an array
            cout<<arr[i]+1;
            // exit(0);
            break;
        }
    }
    return 0;
}*/
/*int main(){
    int m,n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){    // find the missing number in array
        cin>>arr[i];
    }
    m=(n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        m=m-arr[i];
    }cout<<m;
}*/
/*int main(){
    int k;
    cin>>k;    // maximum among the contiguous subarrays
    vector<int>v;
    int arr[9]={1,9,5,7,3,2,3,4,6};
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0])-(k-1));i++){
        for(int j=i;j<i+k;j++){
          v.push_back(arr[j]);
    }
    cout<<*max_element(v.begin(),v.end())<<endl;
    }
}*/
/* int getindex(int arr[],int n,int m){
        int ind;
        bool ok=false;
    for(int i=0;i<n;i++){
       if(m==arr[i]){
        ind= i;
        ok=true;
       }if(ok)break;
    }
    return ind;
}
int main(){
    int n=11,temp,jumps=0;
    bool ok=false;
    //int arr[]={1,3,5,8,9,2,6,7,6,8,9};
    //int arr[]={1,4,3,2,6,7};
    //int arr[]={2,5,7,3,5,9,1,3,5};
    //int arr[]={1};
    int arr[]={2,3,5,8,8,2,6,1,1,1,1};
    pair<int,int>p;
    for(int i=0;i<n;i=p.second){           
        p.first=arr[i];
        p.second=getindex(arr,11,arr[i])+arr[i];
        //cout<<getindex(arr,11,arr[i])<<endl;
        //cout<<p.second<<endl;                  // wrong
        jumps++;
        if(p.second>=n-1){
            ok=true;
        }if(ok)break;
        temp=arr[p.second];
        if(temp==0){
            jumps=-1;
            ok=true;
        }
        if(ok)break;
    }
    cout<<"Jumps : "<<jumps;
return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

// Function to return the minimum number
// of jumps to reach arr[h] from arr[l]
int minJumps(int arr[], int n)
{

	// Base case: when source and
	// destination are same          
	if (n == 1)
		return 0;                         // solution from gfg

	// Traverse through all the points
	// reachable from arr[l]
	// Recursively, get the minimum number
	// of jumps needed to reach arr[h] from
	// these reachable points
	int res = INT_MAX;
	for (int i = n - 2; i >= 0; i--) {
		if (i + arr[i] >= n - 1) {
			int sub_res = minJumps(arr, i + 1);
			if (sub_res != INT_MAX)
				res = min(res, sub_res + 1);
		}
	}

	return res;
}

// Driver Code
int main()
{
	//int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
    int arr[]={2,3,5,8,8,2,6,1,1,1,1};
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Minimum number of jumps to";
	cout << " reach the end is " << minJumps(arr, n);
	return 0;
}