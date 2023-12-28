#include<iostream>
using namespace std;

class students

{
private:
      int score[5];
      int t;
      int sum;
    static int count;
    static   int numberofstdnts[3];
      
public:
    void scores(){
        cout<<"enter the marks of student \n";
      for(int r=1;r<=5;r++){
      cin>>score[r];
    }}
    void calculatescore(){
          sum=0;
    count=0;
    

    
    for (int l=1;l<=5;l++){
        sum=sum+score[l];
    }
    
    cout<<"the total score of student  is "<<sum<<endl;
    
    }
     static void toppers(){
        cout<<numberofstdnts[0]<<endl;
         for (int d=1;d<3;d++){
    if(numberofstdnts[d]>numberofstdnts[0]){
        cout<<numberofstdnts[d];
        count++;
    }}
    cout<<"the number of students having marks more than kristen are "<<count<<endl;
 
 }};
     
     

int students::count;
int students::numberofstdnts[3];
int main(){
    class students kristen,s2,s3;
    kristen.scores();
    s2.scores();
    s3.scores();
    kristen.calculatescore();
    s2.calculatescore();
    s3.calculatescore();
    students::toppers();
 
    return 0;
} 