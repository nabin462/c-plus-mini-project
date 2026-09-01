//Program to show the hotel menue system.
#include<iostream>
using namespace std;
int t_num, n_plate,discount;
float cost;
int momo=100,noole=50,pizza=150,burg=120;//price of each iteam per plate

class menu{
    public:
    void momoo();
    void noodles();
    void pizza();
    void burger();

};
void menu::momoo(){
    cout<<"How many plate do you want order"<<endl;
    cin>>n_plate;
    cost=momo*n_plate;
    if(n_plate>=5){
        discount=(cost*5)/100;
        cost-=discount;
        cout<<"Your bill amount is \t"<<cost<<endl;
    }
    else{
         cout<<"Your bill amount is \t"<<cost<<endl;
    }



}
int main(){
    menu m;
    int choice;
    while(1){
    cout<<"1 : MOMO"<<endl;
    cout<<"2 :Noodles"<<endl;
    cout<<"3 :Pizza"<<endl;
    cout<<"4: Burger"<<endl;
    cout<<"5 :Exit"<<endl;
    cout<<"enter your favorit food"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
    m.momoo();
        break;

        case 2:
        break;

        case 3:
        break;

        case 4:
        break;

        case 5:
        exit(0);
        break;
    
    default:
    cout<<"enter vallid option"<<endl;
        break;
    }
    }


    return 0;
}