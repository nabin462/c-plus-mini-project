//ATM managment system
#include<iostream>
using namespace std;
float acc_balance=0.0;
float amount;
class atm{
    public:
    void checkbalance();
    void deposite();
    void withdraw();
};
void atm::checkbalance(){
    cout<<"current balance="<<acc_balance<<endl;
}

void atm::deposite(){
    cout<<"enter the deposite amount"<<endl;
    cin>>amount;
    acc_balance+=amount;
    cout<<amount<<"\t"<<"is sucessfully deposited"<<endl;

}

void atm ::withdraw(){
    cout<<"enter the withdraw amount"<<endl;
    cin>>amount;
    if(acc_balance>=amount){
        acc_balance-=amount;
        cout<<"withdraw amount is\t"<<amount<<endl;
    }
    else{
        cout<<" Insufficient balance .your current balance is\t"<<acc_balance<<endl;
    }
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
            a.deposite();
            break;

            case 3:
            a.withdraw();
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