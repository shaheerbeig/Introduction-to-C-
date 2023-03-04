//Create a Class named as Languages_Classification and display the following output
//using member functions and private and public variables.?
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class Languages_Classification{
    string name;
    float share;
    float trend;
    int rank;
    public:

    void enterdetails(){
    	cout<<"Enter Rank::"<<endl;
        cin>>rank;
        cout<<"Enter Name::"<<endl;
        cin>>name;
        cout<<"Enter Share::"<<endl;
        cin>>share;
        cout<<"Enter Trend::"<<endl;
        cin>>trend;
    }
    void display(){
        cout<<"   "<<rank<<"\t\t"<<name<<"\t\t"<<share<<"%\t\t"<<trend<<"%"<<endl;
    }
};

int main(){
    Languages_Classification lang[6];
    for(int i=0;i<6;i++){
        cout<<"Enter Details for Language  "<<i+1<<endl;
        lang[i].enterdetails();
    }
    cout<<"\nRank\t\tLanguage\tShare\t\tTrend\n";
    for(int i=0;i<6;i++){
        lang[i].display();
    }
       
}