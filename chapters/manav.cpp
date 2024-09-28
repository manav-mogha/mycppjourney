#include<iostream>
using namespace std;

int main(){

    //variables
    float accounts,maths,english,business,percentage ;

    cout<<"Enter your accounts marks : ";
    cin>>accounts;
    
    cout<<"Enter your maths marks : ";
    cin>>maths;

    cout<<"Enter your english marks : ";
    cin>>english;
    
    cout<<"Enter your business marks : ";
    cin>>business;

  percentage=(accounts+maths+english+business)/400*100;
  cout<<"your percentage is "<<percentage;
}

