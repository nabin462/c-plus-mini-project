//program to show about calculator
#include<iostream>
#include<math.h>
using namespace std;

bool intput_valid(){
     if(cin.fail()){
        cout<<"enter the number not characer "<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        return false;
    }
    return true;
}

void add(){
    double a,b,c;
    cout<<"enter the two number"<<endl;
    cin>>a>>b;
   if(!intput_valid())
   return;
    c=a+b;
    cout<<"sum="<<c<<endl;
}

void sub(){
    double x,y,z;
    cout<<"enter two number"<<endl;
    cin>>x>>y;
     if(!intput_valid())
   return;
    z=x-y;
    cout<<"subtraction="<<z<<endl;
}

void mul(){
    double g,f,h;
    cout<<"enter two number"<<endl;
    cin>>f>>g;
   if(!intput_valid())
   return;
    h=f*g;
    cout<<"multiplication="<<h<<endl;
}

void divid(){
    double d,n,m;
    cout<<"enter two number"<<endl;
    cin>>d>>n;
   if(!intput_valid())
   return;
    if(n==0){
        cout<<"divisible by zero"<<endl;

    }
    else{
    m=d/n;
    cout<<"division="<<m<<endl;
    }

}

void mod(){
    int a,b,v;
    cout<<"enter two number "<<endl;
    cin>>a>>b;
  if(!intput_valid())
   return;
    if(b==0){
        cout<<"modulus of zero is not possible"<<endl;
    }
    else{
    v=a%b;
    cout<<"modulus="<<v<<endl;
    }
}

void squ(){
    double n,s;
    cout<<"enter the number"<<endl;
    cin>>n;
  if(!intput_valid())
   return;
     s=pow(n,2);
     cout<<"square="<<s<<endl;

}

void cub(){
    double n,s;
    cout<<"enter the number"<<endl;
    cin>>n;
  if(!intput_valid())
   return;
     s=pow(n,3);
     cout<<"cube="<<s<<endl;

}

void power(){
    double a,p,d;
    cout<<"enter the two number"<<endl;
    cin>>a>>p;
  if(!intput_valid())
   return;
    d=pow(a,p);
    cout<<"power="<<d<<endl;
}

void sqa(){
    double v,j;
    cout<<"enter the number"<<endl;
    cin>>v;
   if(!intput_valid())
   return;
    if(v<0){
        cout<<" cannot find the square root negative number"<<endl;
    }
    else{
    j=sqrt(v);
    cout<<"square root="<<j<<endl;
    }
    
}

void fact(){
    int i;
    long long f=1;
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
  if(!intput_valid())
   return;
    if(n<0){
        cout<<"negative number factorial cannot calculate"<<endl;
    }
    else{
    for(i=1;i<=n;i++){

        f=f*i;
    }
    cout<<"factorial="<<f<<endl;
}
}
int main(){
    int choice;
    cout<<"------Calculator------"<<endl;
    while(1){
    cout<<"1: addition"<<endl;
    cout<<"2: subtraction"<<endl;
    cout<<"3: multiplication"<<endl;
    cout<<"4: division"<<endl;
    cout<<"5: modulus"<<endl;
    cout<<"6: square"<<endl;
    cout<<"7: cube"<<endl;
    cout<<"8: power"<<endl;
    cout<<"9 :square root"<<endl;
    cout<<"10: factorial"<<endl;
    cout<<"11: Exit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    if(cin.fail()){
        cout<<"invallid input ! enter a number"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        continue;
    }
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
        mod();
        break;

        case 6:
        squ();
        break;

        case 7:
        cub();
        break;

        case 8:
        power();
        break;
        
        case 9:
        sqa();
        break;

        case 10:
        fact();
        break;

        case 11:
        exit(0);
        break;


    
    default:
    cout<<"enter vallid choice"<<endl;
        break;
    }
    }
}
