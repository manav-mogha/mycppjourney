#include<iostream>
using namespace std;



int main(){

  //variable
  float science,maths,english,percentage;

  cout<<"Enter your science marks : ";
  cin>>science;

  cout<<"Enter your maths marks : ";
  cin>>maths; 

    cout<<"Enter your english marks : ";
    cin>>english;

  percentage=(science+maths+english)/300*100;
  cout<<"Your percentage is "<<percentage;
}


