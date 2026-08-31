//ATM managment system
#include<iostream>
using namespace std;
float balance=0.0;
float amount;
class atm{
    public:
    void checkbalance();
};
void atm::checkbalance(){
    cout<<"current balance="<<balance<<endl;
}
int main(){
    atm a;
    int choice;
    while(choice!=4){
        cout<<"1: check balance"<<endl;
        cout<<"2: deposite balance"<<endl;
        cout<<"3:withdraw balance"<<endl;
        cout<<"4:Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
           a.checkbalance();
            break;
         

            case 2:
            break;

            case 3:
            break;

            case 4:
            exit(0);
            break;
        
        default:
        cout<<"enter vallid option"<<endl;
            break;
        }

    }
    

}