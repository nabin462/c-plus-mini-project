//program to show the quize
#include<iostream>
#include<string>
using namespace std;
int main(){
    int i;
    string str[5]={"what is the capital city of  nepal ?",
        "who is the current prime minister of nepal ?",
        "what is the national animal of nepal ?",
        "who is the first minister of nepal ?",
        "what is the height of mount everest ?",


    };
    for(i=0;i<5;i++){
        cout<<(1+i)<<"\t"<<str[i]<<endl;
    }
    return 0;

}