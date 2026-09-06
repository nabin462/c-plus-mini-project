//program to show about calculator
#include<iostream>
using namespace std;

void add(){
    double a,b,c;
    cout<<"enter the two number"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"sum="<<c<<endl;
}

void sub(){
    double x,y,z;
    cout<<"enter two number"<<endl;
    cin>>x>>y;
    z=x-y;
    cout<<"subtraction="<<z<<endl;
}

void mul(){
    double g,f,h;
    cout<<"enter two number"<<endl;
    cin>>f>>g;
    h=f*g;
    cout<<"multiplication="<<h<<endl;
}

void divid(){
    double d,n,m;
    cout<<"enter two number"<<endl;
    cin>>d>>n;
    m=d/n;
    cout<<"division="<<m<<endl;
}
int main(){
    int choice;
    cout<<"------Calculator------"<<endl;
    while(1){
    cout<<"1: addition"<<endl;
    cout<<"2: subtraction"<<endl;
    cout<<"3: multiplication"<<endl;
    cout<<"4: division"<<endl;
    cout<<"5: Exit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        add();
        break;

        case 2:
        sub();
        break;

        case 3:
        mul();
        break;

        case 4:
        divid();
        break;

        case 5:
        exit(0);
        break;


    
    default:
    cout<<"enter vallid choice"<<endl;
        break;
    }
    }
}
