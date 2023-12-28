#include<iostream>
using namespace std;
class shop
{
private:
    int itemid[100];
    int itemprice[100];
    int counter;
public:
    void initcounter(void){
        counter = 0;
    };
    void setprice();
    void displayprice();

};

void shop::setprice()
{
    cout<<"enter the id of the item number "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter the price of the item \n";
    cin>>itemprice[counter];
    counter++ ;
}

void shop::displayprice()
{
    for (int i=0;i<counter;i++)
    cout<<"the price of the item id  "<<itemid[i]<<" is Rs "<<itemprice[i]<<endl;
}
int main(){
    shop saistores ;
    saistores.initcounter();
    saistores.setprice();
    saistores.setprice();
    saistores.setprice();
    saistores.displayprice();

    return 0;
}