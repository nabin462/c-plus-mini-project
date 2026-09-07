//program to show about calculator
#include<iostream>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
vector<string>history;

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
    history.push_back(to_string(a)+"+"+ to_string(b)+"="+ to_string(c));

}

void sub(){
    double x,y,z;
    cout<<"enter two number"<<endl;
    cin>>x>>y;
     if(!intput_valid())
   return;
    z=x-y;
    cout<<"subtraction="<<z<<endl;
    history.push_back(to_string(x)+"-"+ to_string(y)+"="+ to_string(z));
}

void mul(){
    double g,f,h;
    cout<<"enter two number"<<endl;
    cin>>f>>g;
   if(!intput_valid())
   return;
    h=f*g;
    cout<<"multiplication="<<h<<endl;
    history.push_back(to_string(g)+"*"+to_string(f)+"="+to_string(h));
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
    history.push_back(to_string(d)+"/"+to_string(n)+"="+to_string(m));
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
    
    history.push_back(to_string(a)+"%"+to_string(b)+"="+to_string(v));
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
     history.push_back(to_string(n)+"^2="+to_string(s));

}

void cub(){
    double n,s;
    cout<<"enter the number"<<endl;
    cin>>n;
  if(!intput_valid())
   return;
     s=pow(n,3);
     cout<<"cube="<<s<<endl;
     history.push_back(to_string(n)+"^3="+to_string(s));

}

void power(){
    double a,p,d;
    cout<<"enter the two number"<<endl;
    cin>>a>>p;
  if(!intput_valid())
   return;
    d=pow(a,p);
    cout<<"power="<<d<<endl;
    history.push_back(to_string(a)+"^"+to_string(p)+"="+to_string(d));
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
 history.push_back("sqrt("+to_string(v)+")="+to_string(j));
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
    history.push_back(to_string(n)+"!="+to_string(f));
}
}


void show_history(){
    if(history.empty()){
        cout<<"history is not aviable"<<endl;
        return;
    }
    cout<<"....history...."<<endl;
    for(size_t i=0;i<history.size();i++){
        cout<<i+1<<":"<<history[i]<<endl;
    }
}
int main(){
    int choice;
    bool running=true;
    cout<<"------Calculator------"<<endl;
    while(running){
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
    cout<<"11: show history"<<endl;
    cout<<"12: delete history"<<endl;
    cout<<"13: Exit"<<endl;
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
        show_history();
        break;

        case 12:
        history.clear();
        cout<<"history is deleted"<<endl;
        break;

        case 13:
        running=false;
        break;


    
    default:
    cout<<"enter vallid choice"<<endl;
        break;
    }
    }
    cout<<"calculator is closed"<<endl;
    return 0;
}
