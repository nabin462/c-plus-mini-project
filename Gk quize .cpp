//program to demonstrate the gk quize
#include<iostream>
using namespace std;
char ch;
int score=0;
void option(int i){
    int j;
    string opt[10][4]={
        {"a)2070,ashoj 3","b)2072 ashoj 3","c) 2073 ashoj 3","2074 ashoj 3"},
        {"a)Rose","b) Marigold","c)Rhododendron","d) Lotus"},
        {"a)  Dolpa","b) Humla","c) Mustang","d)Taplejung"},
          {"a)Cow","b)Tiger","c)) Rhinoceros","d)D) Elephant"},
            {"a)8,848.86 m","b)8,849.86 m","c)) 8,847.86 m","d)8,850.86 m"},
              {"a)5","b)6","c)7","d)8"},
                {"a)Pokhara","b) Lalitpur","c) Bhaktapur","d)Kathmandu"},
                  {"a)Football","b)Cricket","c)Volleyball","d) Kabaddi"},
                    {"a) P. Koirala","b) Matrika Prasad Koirala","c) Tanka Prasad Acharya","d) Krishna Prasad Bhattarai"},
                      {"a)Koshi","b)Gandaki","c) Karnali","d)Bagmati"},

    };
    
       for(j=0;j<4;j++){
        cout<<opt[i][j]<<" ";
       }
       cout<<endl;
}
void answer(int i){

    char an[10]={
        'b',
        'c',
        'a',
        'a',
        'a',
        'c',
        'd',
        'c',
        'a',
        'c',
    };
    if(an[i]==ch)
    score+=2;
}
int main(){
    int i;
    string quest[10]={
        "1. When was the Constitution of Nepal promulgated?",
        "2. What is the national flower of Nepal?",
        "3. Which is the largest district of Nepal by area?",
        "4. What is the national animal of Nepal?",
        "5. What is the height of Mount Everest?",
        "6. How many provinces are there in Nepal?",
        "7. What is the federal capital of Nepal?",
        "8. What is the national sport of Nepal?",
        "9. Who was the first elected Prime Minister of Nepal?",
        "10. which province is the largest by area?",
    };
    cout<<"GK related question"<<endl;
    for(i=0;i<10;i++){
    cout<<quest[i]<<endl;
    option(i);
    cout<<"enter correct option"<<endl;
    cin>>ch;
    answer(i);
   
    }
     cout<<"score="<<score;
    return 0;
}