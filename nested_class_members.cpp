#include<iostream>
#include<string>
using namespace std;
class binary
{
    private:
    string s;
    public:
    void read();
    void checkbinary();
    void onescompliment();
    void display();

};
void binary :: read()
{
    cout<<"enter the string s\n";
    cin>>s;
    cout<<"the given binary number is "<<s<<endl;;

}
void  binary::checkbinary()
{
    for(int i=0;i<s.length();i++){
        if(s.at(i) != '0' && s.at(i) !='1'){
            cout<<"incorrect binary format\n";
            
        }
    }
    
}
void binary::onescompliment()
{
    for (int i=0;i< s.length();i++){
        if (s.at(i)=='0'){
            s.at(i)='1';

        }
        else{
            s.at(i)='0';
        }
    }

}
void binary::display()
{
    cout<<"the binary number is "<<s;
    
}
int main(){
    binary b;
    b.read();
    b.checkbinary();
    b.onescompliment();
    b.display();
}