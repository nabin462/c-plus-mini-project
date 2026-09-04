//program to show the quize
#include<iostream>
#include<string>
using namespace std;
void option(int i){
    int j;
    string str2[5][4]={
        {"a) dang","b) nepaljung","c) kapilvastu","d)kathmandu"},
    {"a) kp","b) harka","c) balen", "d) parchandra"},
    {"a) cat","b) cow","c)dog","d) horse"},
    {"a) madav","b) deuba","c)bhimsen thapa","janga bahadur"},
    {"a) 8848.86","b) 8908.90","c) 79087","d) 76838"},
};
  
        for( j=0;j<4;j++){
            cout<<str2[i][j]<<" ";

        }
        cout<<endl;
    
    

    
    
    

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
        
        
    }

  
    return 0;

}