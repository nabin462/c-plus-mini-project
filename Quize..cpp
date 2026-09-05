//program to show the quize
#include<iostream>
#include<string>
using namespace std;
 string ans;
 int score=0,wrong=0,righ=0;
void option(int i){
    int j;
    string str2[5][4]={
        {"a) dang","b) nepaljung","c) kapilvastu","d)kathmandu"},
    {"a) kp","b) harka","c) balen", "d) parchandra"},
    {"a) cat","b) cow","c)dog","d) horse"},
    {"a) madav","b) deuba","c)bhimsen_thapa","d)janga_bahadur"},
    {"a) 8848.86","b) 8908.90","c) 79087","d) 76838"},
};
  
        for( j=0;j<4;j++){
            cout<<str2[i][j]<<" ";

        }
        cout<<endl;
    
 

}

void correct(int i){
    
    string str3[5]={
        "kathmandu",
        "balen",
        "cow",
        "bhimsen thapa",
        "8848.86",
    };
    if(str3[i]==ans)
    {
      score+=2;
      righ+=1;
    }
    else{
        wrong+=1;
    }
}
int main(){
    int i;
   

    string str1[5]={"what is the capital city of  nepal ?",
        "who is the current prime minister of nepal ?",
        "what is the national animal of nepal ?",
        "who is the first minister of nepal ?",
        "what is the height of mount everest ?",


    };
     
    cout<<"Quize question"<<endl;
    
    for(i=0;i<5;i++){
        cout<<(1+i)<<"\t"<<str1[i]<<endl;
        option(i);
        cout<<"enter correct option"<<endl;
        cin>>ans;
        correct(i);
        
        
    }
    cout<<"Total score="<<score<<endl;
    cout<<"Right ="<<righ<<endl;
    cout<<"wrong ="<<wrong<<endl;
    

  
    return 0;

}