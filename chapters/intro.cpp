#include<iostream>
using namespace std;


int main(){

  //variable
  float W, H, BMI;

  cout<<"Enter your weight : ";
  cin>>W;

  cout<<"Enter your height : ";
  cin>>H; 

  BMI = W/(H*H);
  cout<<"Your BMI is "<<BMI;
}


